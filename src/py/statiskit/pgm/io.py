__all__ = ['read_dot', 'read_gml', 'from_networkx']

from optionals import networkx

from graph import UndirectedGraph

def write_dot(self, filename):
    networkx.drawing.nx_pydot.write_dot(self.to_networkx(), filename)

UndirectedGraph.write_dot = write_dot
del write_dot

def write_gml(self, filename):
    networkx.write_gml(self.to_networkx(), filename)

UndirectedGraph.write_gml = write_gml
del write_gml

def to_networkx(self):
    graph = networkx.Graph()
    for v in range(self.nb_vertices):
        graph.add_node(v)
    for v in range(self.nb_vertices):
        for v in range(self.nb_vertices):
            neighbours = self.neighbours(v)
            for n in neighbours:
                if n < v:
                    graph.add_edge(v, n)
    return graph

UndirectedGraph.to_networkx = to_networkx
del to_networkx

def read_dot(filename):
    return from_networkx(networkx.drawing.nx_pydot.read_dot(filename))

def read_gml(filename):
    return from_networkx(networkx.read_gml(filename))

def from_networkx(ngraph):
    if ngraph.is_directed():
        raise NotImplementedError()
    else:
        graph = UndirectedGraph(ngraph.number_of_nodes())
        for edge in ngraph.edges_iter():
            graph.add_edge(int(edge[0]), int(edge[1]))
    return graph