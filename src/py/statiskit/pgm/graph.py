from functools import wraps

import _pgm
from __pgm.statiskit import (_VertexPropertyGraph,
                             _EdgePropertyGraph,
                             UndirectedGraph,
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
    return linalg.Matrix([[float(self.has_edge(u, v)) for v in range(self.nb_vertices)] for u in range(self.nb_vertices)])

UndirectedGraph.adjacency = property(adjacency)

def __str__(self):
    return self.adjacency.__str__()

UndirectedGraph.__str__ = __str__
del __str__

def __repr__(self):
    return self.adjacency.__repr__()

UndirectedGraph.__repr__ = __repr__
del __repr__

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

for cls in (_VertexPropertyGraph,):
    vertex_property_graph_decorator(cls)

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

for cls in (_EdgePropertyGraph,):
    edge_property_graph_decorator(cls)