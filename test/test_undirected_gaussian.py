import math

from statiskit import linalg
from statiskit import pgm

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestUndirectedGaussianDistribution(unittest.TestCase):

    _K = 10

    @classmethod
    def setUpClass(cls):
        """Test undirected Gaussian distribution construction"""
        theta = []
        for i in range(cls._K):
            theta.append([0. if not j in [i, i - 1, i + 1] else 0.5 if j in [i - 1, i + 1] else 1. for j in range(cls._K)])
        cls._dist = pgm.UndirectedGaussianDistribution(linalg.Vector([0.] * cls._K),
                                                       linalg.Matrix(theta))
        cls._data = cls._dist.simulation(3 * cls._K + 1)

    def test_pdf_ldf(self):
        """Test undirected Gaussian distribution pdf and ldf"""
        for event in  self._data.events:
            self.assertAlmostEqual(math.log(self._dist.probability(event, log=False)), self._dist.probability(event, log=True))

    def test_graph(self):
        """Test undirected Gaussian distribution graph representation"""
        graph = self._dist.graph
        self.assertEqual(graph.nb_edges, self._K - 1)
        for i in range(self._K - 1):
            self.assertTrue(graph.has_edge(i, i + 1))
        for i in range(1, self._K):
            self.assertTrue(graph.has_edge(i - 1, i))

    def test_dge(self):
        """Test undirected Gaussian distribution chordal ML estimation"""
        dge = pgm.graphical_gaussian_estimation('DG', self._data, graph=self._dist.graph.directed_graph)
        self.assertGreaterEqual(dge.estimated.loglikelihood(self._data), self._dist.loglikelihood(self._data))

    # def test_cge(self):
    #     """Test undirected Gaussian distribution ML estimation"""
    #     cge = pgm.graphical_gaussian_estimation('CG', self._data, graph=self._dist.graph)
    #     self.assertGreaterEqual(cge.estimated.loglikelihood(self._data), self._dist.loglikelihood(self._data))

    def test_nre(self):
        """Test undirected Gaussian distribution estimation using the Newton-Raphson algorithm"""
        nre = pgm.graphical_gaussian_estimation('NR', self._data, graph=self._dist.graph)
        self.assertGreaterEqual(nre.estimated.loglikelihood(self._data), self._dist.loglikelihood(self._data))

    # def test_gae(self):
    #     """Test undirected Gaussian distribution estimation using coordinate-descent algorithm"""
    #     gae = pgm.graphical_gaussian_estimation('GA', self._data, graph=self._dist.graph)
    #     self.assertGreaterEqual(gae.estimated.loglikelihood(self._data), self._dist.loglikelihood(self._data))

    # def test_sgae(self):
    #     """Test undirected Gaussian distribution estimation using sparse coordinate-descent algorithm"""
    #     sgae = pgm.graphical_gaussian_estimation('sGA', self._data, graph=self._dist.graph)
    #     self.assertGreaterEqual(sgae.estimated.loglikelihood(self._data), self._dist.loglikelihood(self._data))

    @classmethod
    def tearDownClass(cls):
        """Test undirected Gaussian distribution deletion"""
        del cls._dist
