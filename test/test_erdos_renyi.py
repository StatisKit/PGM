import math

from statiskit import linalg
from statiskit import pgm

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestErdosRenyiUndirectedGraphProcess(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test Erdos-Renyi undirected graph distribution construction"""
        cls._dist = pgm.UndirectedGraphProcess("Erdos-Renyi", nb_vertices=2, pi=0.5)

    def test_pdf_ldf(self):
        """Test Erdos-Renyi undirected graph distribution ldf"""
        graphs = [pgm.UndirectedGraph(2), pgm.UndirectedGraph(2)]
        graphs[1].add_edge(0, 1)
        for graph in graphs:
            self.assertEqual(self._dist.pdf(graph), 0.5)
            self.assertEqual(self._dist.ldf(graph), math.log(0.5))

    def test_simulate(self):
        """Test Erdos-Renyi undirected graph distribution simulation"""
        counts = [0, 0]
        for index in range(100):
            nb_edges = self._dist.simulate().nb_edges
            counts[nb_edges] = counts[nb_edges] + 1
        self.assertLessEqual(math.fabs(counts[0] - counts[1]) / sum(counts), 0.1)

    @classmethod
    def tearDownClass(cls):
        """Test Erdos-Renyi undirected graph distribution deletion"""
        del cls._dist