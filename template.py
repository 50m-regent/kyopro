import os
import math
import itertools as iter
import functools as func
INF, MOD = float("inf"), 1e9 + 7
MAX, MIN = -INF, INF
dx1, dy1, dx2, dy2 = [-1, 0, 1, 0], [0, -1, 0, 1], [-1, 0, 1, -1, 1, -1, 0, 1], [-1, -1, -1, 0, 0, 1, 1, 1]

def get_int():
    return int(input())

def get_int_list():
    return list(map(int, input().split()))

while(True):
    try:

        print()
    except EOFError:
        exit()
