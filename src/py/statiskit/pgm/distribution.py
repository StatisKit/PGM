from functools import wraps

import _pgm
from __pgm.statiskit.pgm import (DirectedGaussianDistribution,
                                 UndirectedGaussianDistribution)

from statiskit import linalg

__all__ = ['DirectedGaussianDistribution',
           'UndirectedGaussianDistribution']

class Mu(object):

    def __init__(self, dist):
        self._dist = dist

    def __contains__(self, index):
        return self._dist.graph.in_degree(index) == 0


def wrapper(f, g):

    @wraps(f)
    def __getitem__(self, index):
        if not index in self:
            raise IndexError()
        return f(self._dist, index)

    @wraps(f)
    def __setitem__(self, index, value):
        if not index in self:
            raise IndexError()
        if not isinstance(value, float):
            raise ValueError()
        return g(self._dist, index, value)

    return __getitem__, __setitem__

Mu.__getitem__, Mu.__setitem__ = wrapper(DirectedGaussianDistribution.get_mu, DirectedGaussianDistribution.set_mu)
del DirectedGaussianDistribution.get_mu, DirectedGaussianDistribution.set_mu

DirectedGaussianDistribution.mu = property(Mu)

class Predictors(object):

    def __init__(self, dist):
        self._dist = dist

    def __contains__(self, index):
        return self._dist.graph.in_degree(index) > 0

def wrapper(f, g):

    @wraps(f)
    def __getitem__(self, index):
        if not index in self:
            raise IndexError()
        return f(self._dist, index)

    @wraps(f)
    def __setitem__(self, index, value):
        if not index in self:
            raise IndexError()
        if not isinstance(value, float):
            raise ValueError()
        return g(self._dist, index, value)

    return __getitem__, __setitem__

Predictors.__getitem__, Predictors.__setitem__ = wrapper(DirectedGaussianDistribution.get_predictor, DirectedGaussianDistribution.set_predictor)
del DirectedGaussianDistribution.get_predictor, DirectedGaussianDistribution.set_predictor

DirectedGaussianDistribution.predictors = property(Predictors)

DirectedGaussianDistribution.sigma = property(DirectedGaussianDistribution.get_sigma, DirectedGaussianDistribution.set_sigma)
del DirectedGaussianDistribution.get_sigma, DirectedGaussianDistribution.set_sigma

DirectedGaussianDistribution.graph = property(DirectedGaussianDistribution.get_graph)
del DirectedGaussianDistribution.get_graph

UndirectedGaussianDistribution.mu = property(UndirectedGaussianDistribution.get_mu, UndirectedGaussianDistribution.set_mu)
del UndirectedGaussianDistribution.get_mu, UndirectedGaussianDistribution.set_mu

UndirectedGaussianDistribution.theta = property(UndirectedGaussianDistribution.get_theta, UndirectedGaussianDistribution.set_theta)
del UndirectedGaussianDistribution.get_theta, UndirectedGaussianDistribution.set_theta

UndirectedGaussianDistribution.sigma = property(UndirectedGaussianDistribution.get_sigma)
del UndirectedGaussianDistribution.get_sigma

UndirectedGaussianDistribution.graph = property(UndirectedGaussianDistribution.get_graph)
del UndirectedGaussianDistribution.get_graph