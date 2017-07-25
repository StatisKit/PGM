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
        cls._dist = pgm.UndirectedGraphProcess("Erdos-Renyi", nb_vertices=20, pi=0.5)

    def test_pdf_ldf(self):
        """Test Erdos-Renyi undirected graph distribution ldf"""
        graphs = [pgm.UndirectedGraph(20), pgm.UndirectedGraph(20)]
        graphs[1].add_edge(0, 1)
        for graph in graphs:
            self.assertAlmostEqual(self._dist.pdf(graph), math.pow(0.5, 20 * 19 / 2))
            self.assertAlmostEqual(self._dist.ldf(graph), 20 * 19 * math.log(0.5) / 2)

    def test_simulate(self):
        """Test Erdos-Renyi undirected graph distribution simulation"""
        self._dist.simulate()
        # walk = self._dist.random_walk(length=10)
        # self.assertLess(walk.graph.nb_edges, 10)
        walk = self._dist.random_walk("chordal", length=10)
        self.assertLess(walk.graph.nb_edges, 10)
        del walk

    @classmethod
    def tearDownClass(cls):
        """Test Erdos-Renyi undirected graph distribution deletion"""
        del cls._dist