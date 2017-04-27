__all__ = []

# Import dependency decorator modules
import statiskit.stl._stl

# Import Boost.Python module
import __pgm

# Resolve scopes
__pgm.statiskit.UndirectedGraph.traversal_type = __pgm.statiskit._undirected_graph.traversal_type


# Define aliases
__pgm.statiskit.Neighbours = statiskit.stl.__stl.std._UnorderedSet_d48105936d4f5d09a78d2aa9f878fdb8
