import os
from path import path
import autowig
import sys
import pickle
import itertools
import subprocess

asg = autowig.AbstractSemanticGraph()

for dependency in ['LinAlg', 'STL']:
    with open(os.path.join('..', dependency, 'ASG.pkl'), 'r') as filehandler:
        asg.merge(pickle.load(filehandler))


asg = autowig.parser(asg, path(os.path.join(sys.prefix, 'include', 'statiskit', 'core')).walkfiles('*.h'),
                     ['-x', 'c++', '-std=c++11', '-ferror-limit=0', '-I' + os.path.join(sys.prefix, 'include')],
                     bootstrap=1)

asg = autowig.controller(asg)
from autowig.asg import ClassTemplateProxy
for cls in asg.classes():
    if any(isinstance(ancestor, ClassTemplateProxy) for ancestor in cls.ancestors):
        cls.boost_python_export = False

autowig.generator.plugin = 'boost_python_internal'
wrappers = autowig.generator(asg, module='src/py/_core.cpp',
                                  decorator='src/py/statiskit/core/_core.py',
                                  closure=True)
wrappers.write()

s = subprocess.Popen(['scons', 'py', '-j7', '-k', '--eigen-static-assert=yes'], stderr=subprocess.PIPE)
out, err = s.communicate()

autowig.feedback.plugin = 'edit'
codes = []
while not codes or codes[-1].strip():
    codes.append(autowig.feedback(err, '.', asg, variant_dir='build',
                                                  src_dir='src'))
    if codes[-1]:
        exec(codes[-1], locals())
        wrappers.write()
        s = subprocess.Popen(['scons', 'py', '-j7', '-k', '--eigen-static-assert=yes'], stderr=subprocess.PIPE)
        out, err = s.communicate()
    if len(codes) > 2:
        if codes[-1] == codes[-2]:
            break

autowig.feedback.plugin = 'comment'
for i in range(11):
    curr = autowig.feedback(err, '.', asg, variant_dir='build',
                                           src_dir='src')
    s = subprocess.Popen(['scons', 'py', '-j7', '-k', '--eigen-static-assert=yes'], stderr=subprocess.PIPE)
    out, err = s.communicate()

with open('ASG.pkl', 'w') as filehandler:
    pickle.dump(asg, filehandler)







nodes = [node for node in asg.declarations() if not getattr(node.header, 'is_external_dependency', True)]
autowig.visitor.plugin = 'boost_python_closure'
dependencies = asg.dependencies(*nodes)