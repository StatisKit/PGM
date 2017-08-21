import math

from statiskit import (linalg,
                       core,
                       glm)
from statiskit import pgm

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestChordalGaussianDistribution(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test graphical Gaussian distribution construction"""
        graph = pgm.DirectedGraph(3)
        graph.add_edge(0, 1)
        cls._dist = pgm.ChordalGaussianDistribution(graph)
        cls._dist.predictors[1].delta = linalg.Vector((-1.,))
        cls._data = cls._dist.simulation(10)

    def test_pdf_ldf(self):
        """Test graphical Gaussian distribution pdf and ldf"""
        for event in self._data.events:
            self.assertAlmostEqual(math.log(self._dist.probability(event, log=False)), self._dist.probability(event, log=True))

    def test_graph(self):
        """Test graphical Gaussian distribution graph representation"""
        graph = self._dist.graph
        self.assertEqual(graph.nb_edges, 1)
        self.assertTrue(graph.has_edge(0, 1))
        
    def test_cge(self):
        """Test graphical Gaussian distribution chordal ML estimation"""
        cge = pgm.graphical_gaussian_estimation('CG', self._data, graph=self._dist.graph)
        self.assertGreaterEqual(cge.estimated.loglikelihood(self._data), self._dist.loglikelihood(self._data))

    def test_nre(self):
        """Test graphical Gaussian distribution estimation using Newton-Raphson algorithm"""
        nre = pgm.graphical_gaussian_estimation('NR', self._data, graph=self._dist.graph.undirected_graph)
        self.assertGreaterEqual(nre.estimated.loglikelihood(self._data), self._dist.loglikelihood(self._data))

    # def test_gae(self):
    #     """Test graphical Gaussian distribution estimation using coordinate-descent algorithm"""
    #     gae = pgm.graphical_gaussian_estimation('GA', self._data, graph=self._dist.graph.undirected_graph)
    #     self.assertGreaterEqual(gae.estimated.loglikelihood(self._data), self._dist.loglikelihood(self._data))

    # def test_sgae(self):
    #     """Test graphical Gaussian distribution estimation using sparse coordinate-descent algorithm"""
    #     sgae = pgm.graphical_gaussian_estimation('sGA', self._data, graph=self._dist.graph.undirected_graph)
    #     self.assertGreaterEqual(sgae.estimated.loglikelihood(self._data), self._dist.loglikelihood(self._data))

    @classmethod
    def tearDownClass(cls):
        """Test graphical Gaussian distribution deletion"""
        del cls._dist