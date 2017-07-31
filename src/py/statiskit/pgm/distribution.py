from functools import wraps

import _pgm
from __pgm.statiskit.pgm import (ChordalGaussianDistribution,
                                 GraphicalGaussianDistribution)

from statiskit import linalg

__all__ = ['ChordalGaussianDistribution',
           'GraphicalGaussianDistribution']

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

Mu.__getitem__, Mu.__setitem__ = wrapper(ChordalGaussianDistribution.get_mu, ChordalGaussianDistribution.set_mu)
del ChordalGaussianDistribution.get_mu, ChordalGaussianDistribution.set_mu

ChordalGaussianDistribution.mu = property(Mu)

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

Predictors.__getitem__, Predictors.__setitem__ = wrapper(ChordalGaussianDistribution.get_predictor, ChordalGaussianDistribution.set_predictor)
del ChordalGaussianDistribution.get_predictor, ChordalGaussianDistribution.set_predictor

ChordalGaussianDistribution.predictors = property(Predictors)

ChordalGaussianDistribution.sigma = property(ChordalGaussianDistribution.get_sigma, ChordalGaussianDistribution.set_sigma)
del ChordalGaussianDistribution.get_sigma, ChordalGaussianDistribution.set_sigma

ChordalGaussianDistribution.graph = property(ChordalGaussianDistribution.get_graph)
del ChordalGaussianDistribution.get_graph

GraphicalGaussianDistribution.mu = property(GraphicalGaussianDistribution.get_mu, GraphicalGaussianDistribution.set_mu)
del GraphicalGaussianDistribution.get_mu, GraphicalGaussianDistribution.set_mu

GraphicalGaussianDistribution.theta = property(GraphicalGaussianDistribution.get_theta, GraphicalGaussianDistribution.set_theta)
del GraphicalGaussianDistribution.get_theta, GraphicalGaussianDistribution.set_theta

GraphicalGaussianDistribution.sigma = property(GraphicalGaussianDistribution.get_sigma)
del GraphicalGaussianDistribution.get_sigma

GraphicalGaussianDistribution.graph = property(GraphicalGaussianDistribution.get_graph)
del GraphicalGaussianDistribution.get_graph