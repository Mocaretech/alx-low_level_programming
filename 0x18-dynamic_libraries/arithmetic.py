#!/usr/bin/python3

import ctypes
import random

cops = ctypes.CDLL('./100-operations.so')

x = random.randint(-111, 111)
y = random.randint(-111, 111)

print("{} + {} = {}".format(x, y, cops.sum(x, y)))
print("{} - {} = {}".format(x, y, cops.subt(x, y)))
print("{} * {} = {}".format(x, y, cops.mult(x, y)))
print("{} / {} = {}".format(x, y, cops.div(x, y)))
print("{} % {} = {}".format(x, y, cops.mod(x, y)))
