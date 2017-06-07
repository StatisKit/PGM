from functools import wraps

import _pgm
from __pgm.statiskit.pgm import (UndirectedGraphProcess,
                                 ErdosRenyiUndirectedGraphProcess,
                                 MixtureUndirectedGraphProcess)

from statiskit import linalg

__all__ = ['UndirectedGraphProcess']

def UndirectedGraphProcess(ident, **kwargs):
    if ident == 'Erdos-Renyi':
        dist = ErdosRenyiUndirectedGraphProcess(kwargs.pop('nb_vertices'), 0.5)
    elif ident == 'mixture':
        dist = MixtureUndirectedGraphProcess(kwargs.pop('nb_vertices'), kwargs.pop('nb_states'))
    else:
        raise ValueError('\'ident\' parameter')
    for attr in kwargs.keys():
        if hasattr(dist, attr):
            setattr(dist, attr, kwargs.pop(attr))
        else:
            raise AttributeError("'" + dist.__class__.__name__ + "' object has no attribute '" + attr + "'")
    return dist

ErdosRenyiUndirectedGraphProcess.nb_vertices = property(ErdosRenyiUndirectedGraphProcess.get_nb_vertices, ErdosRenyiUndirectedGraphProcess.set_nb_vertices)
del ErdosRenyiUndirectedGraphProcess.get_nb_vertices, ErdosRenyiUndirectedGraphProcess.set_nb_vertices

ErdosRenyiUndirectedGraphProcess.pi = property(ErdosRenyiUndirectedGraphProcess.get_pi, ErdosRenyiUndirectedGraphProcess.set_pi)
del ErdosRenyiUndirectedGraphProcess.get_pi, ErdosRenyiUndirectedGraphProcess.set_pi

MixtureUndirectedGraphProcess.nb_vertices = property(MixtureUndirectedGraphProcess.get_nb_vertices, MixtureUndirectedGraphProcess.set_nb_vertices)
del MixtureUndirectedGraphProcess.get_nb_vertices, MixtureUndirectedGraphProcess.set_nb_vertices

MixtureUndirectedGraphProcess.alpha = property(MixtureUndirectedGraphProcess.get_alpha, MixtureUndirectedGraphProcess.set_alpha)
del MixtureUndirectedGraphProcess.get_alpha, MixtureUndirectedGraphProcess.set_alpha

MixtureUndirectedGraphProcess.pi = property(MixtureUndirectedGraphProcess.get_pi, MixtureUndirectedGraphProcess.set_pi)
del MixtureUndirectedGraphProcess.get_pi, MixtureUndirectedGraphProcess.set_pi
