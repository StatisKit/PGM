from functools import wraps
from statiskit.core.estimation import _estimation, optimization_estimation_decorator

import statiskit.pgm._pgm
from statiskit.pgm.__pgm.statiskit import _OptimizationEstimation
from statiskit.pgm.__pgm.statiskit.pgm import (DirectedGaussianDistributionMLEstimation,
                                               ChordalGaussianDistributionMLEstimation,
                                               UndirectedGaussianDistributionIMLEstimation,
                                               UndirectedGaussianDistributionSIMLEstimation)

__all__ = ['graphical_gaussian_estimation']

def graphical_gaussian_estimation(algo='NR', data=None, **kwargs):
    """
    """
    return _estimation(algo, 
                       data,
                       dict(DG = DirectedGaussianDistributionMLEstimation.Estimator,
                            CG = ChordalGaussianDistributionMLEstimation.Estimator,
                            GA = UndirectedGaussianDistributionIMLEstimation.GAEstimator,
                            sGA = UndirectedGaussianDistributionSIMLEstimation.GAEstimator,
                            NR = UndirectedGaussianDistributionIMLEstimation.NREstimator),
                       **kwargs)

DirectedGaussianDistributionMLEstimation.Estimator.solver = property(DirectedGaussianDistributionMLEstimation.Estimator.get_solver, DirectedGaussianDistributionMLEstimation.Estimator.set_solver)
del DirectedGaussianDistributionMLEstimation.Estimator.get_solver, DirectedGaussianDistributionMLEstimation.Estimator.set_solver

DirectedGaussianDistributionMLEstimation.Estimator.graph = property(DirectedGaussianDistributionMLEstimation.Estimator.get_graph, DirectedGaussianDistributionMLEstimation.Estimator.set_graph)
del DirectedGaussianDistributionMLEstimation.Estimator.get_graph, DirectedGaussianDistributionMLEstimation.Estimator.set_graph

ChordalGaussianDistributionMLEstimation.Estimator.graph = property(ChordalGaussianDistributionMLEstimation.Estimator.get_graph, ChordalGaussianDistributionMLEstimation.Estimator.set_graph)
del ChordalGaussianDistributionMLEstimation.Estimator.get_graph, ChordalGaussianDistributionMLEstimation.Estimator.set_graph

for cls in _OptimizationEstimation:
    optimization_estimation_decorator(cls)