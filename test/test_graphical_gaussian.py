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
        for event in  self._data.events:
            self.assertAlmostEqual(math.log(self._dist.probability(event, log=False)), self._dist.probability(event, log=True))

    def test_graph(self):
        """Test graphical Gaussian distribution graph representation"""
        graph = self._dist.graph
        self.assertEqual(graph.nb_edges, 2)
        self.assertTrue(graph.has_edge(0, 1))
        self.assertTrue(graph.has_edge(1, 2))
        self.assertFalse(graph.has_edge(0, 2))

    def test_cge(self):
        """Test graphical Gaussian distribution chordal ML estimation"""
        cge = pgm.graphical_gaussian_estimation('CG', self._data, graph=self._dist.graph.directed_graph)
        self.assertGreaterEqual(cge.estimated.loglikelihood(self._data), self._dist.loglikelihood(self._data))

    def test_nre(self):
        """Test graphical Gaussian distribution estimation using Newton-Raphson algorithm"""
        nre = pgm.graphical_gaussian_estimation('NR', self._data, graph=self._dist.graph)
        self.assertGreaterEqual(nre.estimated.loglikelihood(self._data), self._dist.loglikelihood(self._data))

    # def test_gae(self):
    #     """Test graphical Gaussian distribution estimation using coordinate-descent algorithm"""
    #     gae = pgm.graphical_gaussian_estimation('GA', self._data, graph=self._dist.graph)
    #     self.assertGreaterEqual(gae.estimated.loglikelihood(self._data), self._dist.loglikelihood(self._data))

    # def test_sgae(self):
    #     """Test graphical Gaussian distribution estimation using sparse coordinate-descent algorithm"""
    #     sgae = pgm.graphical_gaussian_estimation('sGA', self._data, graph=self._dist.graph)
    #     self.assertGreaterEqual(sgae.estimated.loglikelihood(self._data), self._dist.loglikelihood(self._data))

    @classmethod
    def tearDownClass(cls):
        """Test graphical Gaussian distribution deletion"""
        del cls._dist
