import sys

eodir = '/usr/share/eo/gdb'
if not eodir in sys.path:
   sys.path.insert(0, eodir)

import eo_gdb
