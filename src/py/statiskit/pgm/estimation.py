##################################################################################
#                                                                                #
# StatisKit-CoreThis software is distributed under the CeCILL-C license. You     #
# should have received a copy of the legalcode along with this work. If not, see #
# <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 #
#                                                                                #
##################################################################################

from functools import wraps
from statiskit.core.estimation import _estimation

import statiskit.pgm._pgm
from statiskit.pgm.__pgm.statiskit.pgm import (GraphicalGaussianDistributionMLEstimation,
                                               GraphicalGaussianDistributionNREstimation)

__all__ = ['graphical_gaussian_estimation']

def graphical_gaussian_estimation(algo='ml', data=None, **kwargs):
    """
    """
    return _estimation(algo, 
                       data,
                       dict(ml = GraphicalGaussianDistributionMLEstimation.Estimator,
                            nr = GraphicalGaussianDistributionNREstimation.Estimator),
                       **kwargs)

GraphicalGaussianDistributionMLEstimation.Estimator.graph = property(GraphicalGaussianDistributionMLEstimation.Estimator.get_graph, GraphicalGaussianDistributionMLEstimation.Estimator.set_graph)
del GraphicalGaussianDistributionMLEstimation.Estimator.get_graph, GraphicalGaussianDistributionMLEstimation.Estimator.set_graph