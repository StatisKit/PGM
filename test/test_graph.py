from statiskit import linalg
from statiskit import pgm

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestUndirectedGraph(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test undirected graph construction"""
        cls._graph = pgm.UndirectedGraph(linalg.Matrix([[0.0, 1.0, 1.0, 0.0, 0.0],
                                                        [1.0, 0.0, 1.0, 0.0, 0.0],
                                                        [1.0, 1.0, 0.0, 1.0, 0.0],
                                                        [0.0, 0.0, 1.0, 0.0, 0.0],
                                                        [0.0, 0.0, 0.0, 0.0, 0.0]]))

    def test_neigbours(self):
        """Test undirected graph neighbours"""
        self.assertTrue(self._graph.are_neighbours(0, 1))
        self.assertFalse(self._graph.are_neighbours(0, 3))

    def test_degree(self):
        """Test undirected graph degrees"""
        self.assertEqual(self._graph.degree(0), 2)
        self.assertEqual(self._graph.degree(3), 1)

    def test_connected(self):
        """Test undirected graph connected"""
        self.assertTrue(self._graph.are_connected((0,1), (2,3)))
        self.assertFalse(self._graph.are_connected((0,1,2,3), (4,)))

    def test_separated(self):
        """Test undirected graph separated"""
        self.assertTrue(self._graph.are_separated((0,1), (3,), (2,)))
        self.assertFalse(self._graph.are_separated((0,1), (2,), (3,)))

    @classmethod
    def tearDownClass(cls):
        """Test undirected graph deletion"""
        del cls._graph