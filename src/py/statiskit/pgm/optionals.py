import types

__all__ = []

class NotImportedModule(types.ModuleType):

    def __init__(self, module):
        self._module = module

    def __getattr__(self, arg):
        raise ImportError("No module named " + self._module)

try:
    import networkx
except ImportError:
    networkx = NotImportedModule('networkx')