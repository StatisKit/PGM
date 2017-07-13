import math

from statiskit import linalg
from statiskit import pgm

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestGraphicalGaussianDistribution(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test graphical Gaussian distribution construction"""
        cls._dist = pgm.GraphicalGaussianDistribution(linalg.Vector([0.] * 3),
                                                      linalg.Matrix([[1.0, 0.5, 0.0],
                                                                     [0.5, 1.0, 0.5],
                                                                     [0.0, 0.5, 1.0]]))
        cls._data = cls._dist.simulation(10)

    def test_pdf_ldf(self):
        """Test graphical Gaussian distribution pdf and ldf"""
        data = self._dist.simulation(10)
        for event in data.events:
            self.assertAlmostEqual(math.log(self._dist.probability(event, log=False)), self._dist.probability(event, log=True))

    def test_graph(self):
        """Test graphical Gaussian distribution graph representation"""
        graph = self._dist.graph
        self.assertEqual(graph.nb_edges, 2)
        self.assertTrue(graph.has_edge(0, 1))
        self.assertTrue(graph.has_edge(1, 2))
        self.assertFalse(graph.has_edge(0, 2))

    def test_mle(self):
        """Test graphical Gaussian distribution ML estimation"""
        mle = pgm.graphical_gaussian_estimation('ml', self._data, graph=self._dist.graph)
        self.assertGreaterEqual(mle.estimated.loglikelihood(self._data), self._dist.loglikelihood(self._data))

    def test_nre(self):
        """Test graphical Gaussian distribution estimation using Newton-Raphson algorithm"""
        nre = pgm.graphical_gaussian_estimation('nr', self._data, graph=self._dist.graph)
        self.assertGreaterEqual(nre.estimated.loglikelihood(self._data), self._dist.loglikelihood(self._data))

    def test_cde(self):
        """Test graphical Gaussian distribution estimation using coordinate-descent algorithm"""
        cde = pgm.graphical_gaussian_estimation('cd', self._data, graph=self._dist.graph)
        self.assertGreaterEqual(cde.estimated.loglikelihood(self._data), self._dist.loglikelihood(self._data))

    def test_scde(self):
        """Test graphical Gaussian distribution estimation using sparse coordinate-descent algorithm"""
        scde = pgm.graphical_gaussian_estimation('scd', self._data, graph=self._dist.graph)
        self.assertGreaterEqual(scde.estimated.loglikelihood(self._data), self._dist.loglikelihood(self._data))

    @classmethod
    def tearDownClass(cls):
        """Test graphical Gaussian distribution deletion"""
        del cls._dist