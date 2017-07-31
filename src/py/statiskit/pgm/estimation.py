##################################################################################
#                                                                                #
# StatisKit-CoreThis software is distributed under the CeCILL-C license. You     #
# should have received a copy of the legalcode along with this work. If not, see #
# <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 #
#                                                                                #
##################################################################################

from functools import wraps
from statiskit.core.estimation import _estimation, optimization_estimation_decorator

import statiskit.pgm._pgm
from statiskit.pgm.__pgm.statiskit import _OptimizationEstimation
from statiskit.pgm.__pgm.statiskit.pgm import (ChordalGaussianDistributionMLEstimation,
                                               GraphicalGaussianDistributionMLEstimation,
                                               GraphicalGaussianDistributionIMLEstimation,
                                               GraphicalGaussianDistributionSIMLEstimation)

__all__ = ['graphical_gaussian_estimation']

def graphical_gaussian_estimation(algo='NR', data=None, **kwargs):
    """
    """
    return _estimation(algo, 
                       data,
                       dict(CG = ChordalGaussianDistributionMLEstimation.Estimator,
                            sCG = GraphicalGaussianDistributionMLEstimation.Estimator,
                            GA = GraphicalGaussianDistributionIMLEstimation.CDEstimator,
                            sGA = GraphicalGaussianDistributionSIMLEstimation.CDEstimator,
                            NR = GraphicalGaussianDistributionIMLEstimation.NREstimator),
                       **kwargs)

ChordalGaussianDistributionMLEstimation.Estimator.solver = property(ChordalGaussianDistributionMLEstimation.Estimator.get_solver, ChordalGaussianDistributionMLEstimation.Estimator.set_solver)
del ChordalGaussianDistributionMLEstimation.Estimator.get_solver, ChordalGaussianDistributionMLEstimation.Estimator.set_solver

ChordalGaussianDistributionMLEstimation.Estimator.graph = property(ChordalGaussianDistributionMLEstimation.Estimator.get_graph, ChordalGaussianDistributionMLEstimation.Estimator.set_graph)
del ChordalGaussianDistributionMLEstimation.Estimator.get_graph, ChordalGaussianDistributionMLEstimation.Estimator.set_graph

GraphicalGaussianDistributionMLEstimation.Estimator.graph = property(GraphicalGaussianDistributionMLEstimation.Estimator.get_graph, GraphicalGaussianDistributionMLEstimation.Estimator.set_graph)
del GraphicalGaussianDistributionMLEstimation.Estimator.get_graph, GraphicalGaussianDistributionMLEstimation.Estimator.set_graph

for cls in _OptimizationEstimation:
    optimization_estimation_decorator(cls)