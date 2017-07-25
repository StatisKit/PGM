from tempfile import NamedTemporaryFile

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

    def test_str(self):
        """Test undirected graph string representation"""
        self.assertEqual(str(self._graph), """[0.0, 1.0, 1.0, 0.0, 0.0]
[1.0, 0.0, 1.0, 0.0, 0.0]
[1.0, 1.0, 0.0, 1.0, 0.0]
[0.0, 0.0, 1.0, 0.0, 0.0]
[0.0, 0.0, 0.0, 0.0, 0.0]""")

    def test_edge(self):
        """Test undirected graph edge"""
        self.assertTrue(self._graph.has_edge(0, 1))
        self.assertFalse(self._graph.has_edge(0, 3))

    def test_degree(self):
        """Test undirected graph degrees"""
        self.assertEqual(self._graph.degree(0), 2)
        self.assertEqual(self._graph.degree(0), len(self._graph.neighbours(0)))
        self.assertEqual(self._graph.degree(3), 1)
        self.assertEqual(self._graph.degree(3), len(self._graph.neighbours(3)))

    def test_connected(self):
        """Test undirected graph connected"""
        self.assertTrue(self._graph.are_connected((0,1), (2,3)))
        self.assertFalse(self._graph.are_connected((0,1,2,3), (4,)))

    def test_separated(self):
        """Test undirected graph separated"""
        self.assertTrue(self._graph.are_separated((0,1), (3,), (2,)))
        self.assertFalse(self._graph.are_separated((0,1), (2,), (3,)))

    def test_chordality(self):
        """Test undirected graph chordality"""
        self.assertTrue(self._graph.is_chordal)
        graph = pgm.UndirectedGraph(linalg.Matrix([[0.0, 1.0, 0.0, 1.0],
                                                   [1.0, 0.0, 1.0, 0.0],
                                                   [0.0, 1.0, 0.0, 1.0],
                                                   [1.0, 0.0, 1.0, 0.0]]))
        self.assertFalse(graph.is_chordal)
        self.assertTrue(graph.maximum_cardinality_embedding(True).is_chordal)
        self.assertTrue(graph.maximum_cardinality_embedding(False).is_chordal)

    def test_clique_tree(self):
        """Test undirected graph clique tree"""
        graph = self._graph.clique_tree()
        self.assertEqual(graph.nb_cliques, 3)
        cliques = ["{4}", "{2, 3}", "{0, 1, 2}"]
        for c in range(len(graph.cliques)):
            self.assertIn(str(graph.cliques[c]), cliques)
        separators = ["{}", "{}", "{2}"]
        for s in range(len(graph.separators)):
            self.assertIn(str(graph.separators[s]), separators)

    def test_read_write_dot(self):
        """Test undirected graph read & write methods with DOT format"""
        filename = NamedTemporaryFile().name
        self._graph.write_dot(filename)
        graph = pgm.read_dot(filename)
        self.assertEqual(str(graph), str(self._graph))

    def test_read_write_gml(self):
        """Test undirected graph read & write methods with GML format"""
        filename = NamedTemporaryFile().name
        self._graph.write_gml(filename)
        graph = pgm.read_gml(filename)
        self.assertEqual(str(graph), str(self._graph))

    @classmethod
    def tearDownClass(cls):
        """Test undirected graph deletion"""
        del cls._graph

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestUndirectedForest(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test undirected forest construction"""
        cls._graph = pgm.UndirectedForest(linalg.Matrix([[0.0, 2.0, 1.0, 0.0, 0.0],
                                                         [2.0, 0.0, 3.0, 0.0, 0.0],
                                                         [1.0, 3.0, 0.0, 4.0, 0.0],
                                                         [0.0, 0.0, 4.0, 0.0, 0.0],
                                                         [0.0, 0.0, 0.0, 0.0, 0.0]]))
    def test_str(self):
        """Test undirected forest string representation"""
        self.assertEqual(self._graph.__str__(), """[0.0, 1.0, 0.0, 0.0, 0.0]
[1.0, 0.0, 1.0, 0.0, 0.0]
[0.0, 1.0, 0.0, 1.0, 0.0]
[0.0, 0.0, 1.0, 0.0, 0.0]
[0.0, 0.0, 0.0, 0.0, 0.0]""")

    @classmethod
    def tearDownClass(cls):
        """Test undirected forest deletion"""
        del cls._graph
