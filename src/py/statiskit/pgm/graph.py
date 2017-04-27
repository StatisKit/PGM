from functools import wraps

import _pgm
from __pgm.statiskit import (UndirectedGraph,
                                UndirectedForest)

from statiskit import linalg

__all__ = ['UndirectedGraph',
           'UndirectedForest']

UndirectedGraph.nb_vertices = property(UndirectedGraph.get_nb_vertices)
del UndirectedGraph.get_nb_vertices

UndirectedGraph.nb_edges = property(UndirectedGraph.get_nb_edges)
del UndirectedGraph.get_nb_edges

UndirectedGraph.is_chordal = property(UndirectedGraph.is_chordal)

def adjacency(self):
    return linalg.Matrix([[float(self.are_neighbours(u, v)) for v in range(self.nb_vertices)] for u in range(self.nb_vertices)])

UndirectedGraph.adjacency = property(adjacency)

def __str__(self):
    return self.adjacency.__str__()

UndirectedGraph.__str__ = __str__
del __str__

def __repr__(self):
    return self.adjacency.__repr__()

UndirectedGraph.__repr__ = __repr__
del __repr__

    