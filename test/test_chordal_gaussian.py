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
        
    @classmethod
    def tearDownClass(cls):
        """Test graphical Gaussian distribution deletion"""
        del cls._dist