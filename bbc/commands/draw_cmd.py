# main.py
from bbc.wrappers import bricscad_wrapper

# FIXME: somehow this is not working

def draw_line_between_two_points(start_point, end_point):
    # Create a new line entity
    bricscad_wrapper.add_line(start_point, end_point)

    # Refresh the display
    bricscad_wrapper.redraw()


# Register the "MyCommand" command with BricsCAD
bricscad_wrapper.add_command("MyCommand", draw_line_between_two_points)
