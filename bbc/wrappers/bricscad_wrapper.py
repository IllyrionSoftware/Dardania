import ctypes

bricscadapi = ctypes.cdll.LoadLibrary("bricscadapi.lib")
bricscadapi.Line.argtypes = [
    ctypes.c_double,
    ctypes.c_double,
    ctypes.c_double,
    ctypes.c_double,
]


def add_line(start_point, end_point):
    bricscadapi.Line(start_point[0], start_point[1], end_point[0], end_point[1])


def redraw():
    bricscadapi.redraw()
