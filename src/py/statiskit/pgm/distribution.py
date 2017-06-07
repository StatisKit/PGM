from functools import wraps

import _pgm
from __pgm.statiskit.pgm import (GraphicalGaussianDistribution)

from statiskit import linalg

__all__ = ['GraphicalGaussianDistribution']

GraphicalGaussianDistribution.mu = property(GraphicalGaussianDistribution.get_mu, GraphicalGaussianDistribution.set_mu)
del GraphicalGaussianDistribution.get_mu, GraphicalGaussianDistribution.set_mu

GraphicalGaussianDistribution.theta = property(GraphicalGaussianDistribution.get_theta, GraphicalGaussianDistribution.set_theta)
del GraphicalGaussianDistribution.get_theta, GraphicalGaussianDistribution.set_theta

GraphicalGaussianDistribution.sigma = property(GraphicalGaussianDistribution.get_sigma)
del GraphicalGaussianDistribution.get_sigma

GraphicalGaussianDistribution.graph = property(GraphicalGaussianDistribution.get_graph)
del GraphicalGaussianDistribution.get_graph