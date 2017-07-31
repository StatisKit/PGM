# -*-python-*-

import os
from SCons.Errors import EnvironmentError

env = Environment(tools = ['toolchain'])

env.AppendUnique(LIBS=['statiskit_linalg',
                       'statiskit_core',
                       'statiskit_glm'])

VariantDir(os.path.join('build', 'src'), 'src')
VariantDir(os.path.join('build', 'test'), 'test')

SConscript(os.path.join('build', 'src', 'cpp', 'SConscript'), exports="env")
SConscript(os.path.join('build', 'src', 'py', 'wrapper', 'SConscript'), exports="env")
SConscript(os.path.join('build', 'test', 'SConscript'), exports="env")
SConscript(os.path.join('bin', 'conda', 'SConscript'), exports="env")

Default("install")