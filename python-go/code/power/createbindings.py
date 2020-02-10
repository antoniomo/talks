from pybindgen import Module, retval, param
import sys

mod = Module('pygolib')

mod.add_include('"libgolib.h"')

mod.add_function('Power',
        retval('long long'),
        [param('long long', 'a'), param('long long', 'b')])

mod.generate(sys.stdout)
