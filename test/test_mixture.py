import math

from statiskit import linalg
from statiskit import pgm

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestMixtureUndirectedGraphProcess(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test mixture undirected graph distribution construction"""
        cls._dist = pgm.UndirectedGraphProcess("mixture", nb_vertices=20, nb_states=2)

    # def test_pdf_ldf(self):
    #     """Test mixture undirected graph distribution ldf"""
    #     graphs = [pgm.UndirectedGraph(2), pgm.UndirectedGraph(2)]
    #     graphs[1].add_edge(0, 1)
    #     for graph in graphs:
    #         self.assertEqual(self._dist.pdf(graph), 0.5)
    #         self.assertEqual(self._dist.ldf(graph), math.log(0.5))

    def test_simulate(self):
        """Test mixture undirected graph distribution simulation"""
        self._dist.simulate()
        walk = self._dist.random_walk("chordal", length=10)
        self.assertLess(walk.graph.nb_edges, 10)
        del walk

    def test_posterior(self):
        """Test mixture undirected graph distribution posterior"""
        graph = self._dist.simulate()
        tau = self._dist.posterior(graph, False)
        for i in range(len(tau)):
            for j in range(len(tau[i])):
                self.assertAlmostEqual(tau[i][j], 1/2.)

    @classmethod
    def tearDownClass(cls):
        """Test mixture undirected graph distribution deletion"""
        del cls._dist