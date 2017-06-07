from functools import wraps
import itertools

import _pgm
from __pgm.statiskit.pgm import (UndirectedGraph,
                                     UndirectedForest,
                                 CliqueTree)

from statiskit import linalg

__all__ = ['UndirectedGraph',
           'UndirectedForest']

UndirectedGraph.nb_vertices = property(UndirectedGraph.get_nb_vertices)
del UndirectedGraph.get_nb_vertices

UndirectedGraph.nb_edges = property(UndirectedGraph.get_nb_edges)
del UndirectedGraph.get_nb_edges

UndirectedGraph.is_chordal = property(UndirectedGraph.is_chordal)

def to_matrix(self, sort=None):
    if sort is None:
        vertices = range(self.nb_vertices)
    elif isinstance(sort, list):
        vertices = range(self.nb_vertices)
        def sorter(vertex):
            return sort[vertex]
        vertices = sorted(vertices, key = sorter)
    elif isinstance(sort, basestring):
        if sort == 'mcs':
            vertices = range(self.nb_vertices)
            vertices = [vertices[vertex] for vertex in self.maximum_cardinality_search()]
        else:
            raise ValueError('\'sort\' parameter')
    else:
        raise TypeError('\'sort\' parameter')
    return linalg.Matrix([[float(self.has_edge(u, v)) for v in vertices] for u in vertices])

UndirectedGraph.to_matrix = to_matrix
del to_matrix

def __str__(self):
    return self.to_matrix().__str__()

UndirectedGraph.__str__ = __str__
del __str__

def __repr__(self):
    return self.to_matrix().__repr__()

UndirectedGraph.__repr__ = __repr__
del __repr__

def clique_tree(self):
    return CliqueTree(self)

UndirectedGraph.clique_tree = clique_tree
del clique_tree

CliqueTree.nb_cliques = property(CliqueTree.get_nb_cliques)
del CliqueTree.get_nb_cliques

class Proxy(object):

    def __init__(self, graph):
        self._graph = graph

    def __len__(self):
        return self._graph.nb_cliques

class Cliques(Proxy):
    pass 

class Separators(Proxy):
    pass

def wrapper_getitem(f):
    @wraps(f)
    def __getitem__(self, index):
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError()
        return f(self._graph, index)
    return __getitem__

Cliques.__getitem__ = wrapper_getitem(CliqueTree.get_clique)
del CliqueTree.get_clique
CliqueTree.cliques = property(Cliques)
Separators.__getitem__ = wrapper_getitem(CliqueTree.get_separator)
del CliqueTree.get_separator
CliqueTree.separators = property(Separators)
del wrapper_getitem

def vertex_property_graph_decorator(cls):

    class VertexProperties(object):

        def __init__(self, graph):
            self._graph = graph

    def wrapper__getitem__(f):
        @wraps(f)
        def __getitem__(self, v):
            return f(self._graph, v)
        return __getitem__

    VertexProperties.__getitem__ = wrapper__getitem__(cls.get_vertex_property)
    del cls.get_vertex_property

    def wrapper__setitem__(f):
        @wraps(f)
        def __getitem__(self, v, value):
            return f(self._graph, v, value)
        return __getitem__

    VertexProperties.__setitem__ = wrapper__getitem__(cls.set_vertex_property)
    del cls.set_vertex_property

    cls.vertex_properties = property(VertexProperties)

# for cls in (_VertexPropertyGraph,):
#     vertex_property_graph_decorator(cls)

def edge_property_graph_decorator(cls):

    class EdgeProperties(object):

        def __init__(self, graph):
            self._graph = graph

    def wrapper__getitem__(f):
        @wraps(f)
        def __getitem__(self, uv):
            return f(self._graph, uv[0], uv[-1])
        return __getitem__

    EdgeProperties.__getitem__ = wrapper__getitem__(cls.get_edge_property)
    del cls.get_edge_property

    def wrapper__setitem__(f):
        @wraps(f)
        def __getitem__(self, uv, value):
            return f(self._graph, uv[0], uv[-1], value)
        return __getitem__

    EdgeProperties.__setitem__ = wrapper__getitem__(cls.set_edge_property)
    del cls.set_edge_property

    cls.edge_properties = property(EdgeProperties)

# for cls in (_EdgePropertyGraph,):
#     edge_property_graph_decorator(cls)