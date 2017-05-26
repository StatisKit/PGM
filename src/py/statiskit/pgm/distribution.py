from functools import wraps

import _pgm
from __pgm.statiskit import (UndirectedGraphDistribution,
                                 ErdosRenyiUndirectedGraphDistribution,
                                 MixtureUndirectedGraphDistribution)

from statiskit import linalg

__all__ = ['UndirectedGraphDistribution']

def UndirectedGraphDistribution(ident, **kwargs):
    if ident == 'Erdos-Renyi':
        dist = ErdosRenyiUndirectedGraphDistribution(kwargs.pop('nb_vertices'), 0.5)
    elif ident == 'mixture':
        dist = MixtureUndirectedGraphDistribution(kwargs.pop('nb_vertices'), kwargs.pop('nb_states'))
    else:
        raise ValueError('\'ident\' parameter')
    for attr in kwargs.keys():
        if hasattr(dist, attr):
            setattr(dist, attr, kwargs.pop(attr))
        else:
            raise AttributeError("'" + dist.__class__.__name__ + "' object has no attribute '" + attr + "'")
    return dist

ErdosRenyiUndirectedGraphDistribution.nb_vertices = property(ErdosRenyiUndirectedGraphDistribution.get_nb_vertices, ErdosRenyiUndirectedGraphDistribution.set_nb_vertices)
del ErdosRenyiUndirectedGraphDistribution.get_nb_vertices, ErdosRenyiUndirectedGraphDistribution.set_nb_vertices

ErdosRenyiUndirectedGraphDistribution.pi = property(ErdosRenyiUndirectedGraphDistribution.get_pi, ErdosRenyiUndirectedGraphDistribution.set_pi)
del ErdosRenyiUndirectedGraphDistribution.get_pi, ErdosRenyiUndirectedGraphDistribution.set_pi

MixtureUndirectedGraphDistribution.nb_vertices = property(MixtureUndirectedGraphDistribution.get_nb_vertices, MixtureUndirectedGraphDistribution.set_nb_vertices)
del MixtureUndirectedGraphDistribution.get_nb_vertices, MixtureUndirectedGraphDistribution.set_nb_vertices

MixtureUndirectedGraphDistribution.alpha = property(MixtureUndirectedGraphDistribution.get_alpha, MixtureUndirectedGraphDistribution.set_alpha)
del MixtureUndirectedGraphDistribution.get_alpha, MixtureUndirectedGraphDistribution.set_alpha

MixtureUndirectedGraphDistribution.pi = property(MixtureUndirectedGraphDistribution.get_pi, MixtureUndirectedGraphDistribution.set_pi)
del MixtureUndirectedGraphDistribution.get_pi, MixtureUndirectedGraphDistribution.set_pi