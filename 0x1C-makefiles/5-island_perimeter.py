#!/usr/bin/python3
"""
island_perimeter
"""


def island_perimeter(grid):
    """
    that returns the perimeter of the island described
    """

    water = 0
    land = 1
    perimeter = 0

    for y, l in enumerate(grid):
        for x, parcel in enumerate(l):
            if parcel == land:
                if x == 0 or grid[y][x - 1] == water:
                    perimeter += 1
                if (x + 1) == len(l) or grid[y][x + 1] == water:
                    perimeter += 1
                if y == 0 or grid[y - 1][x] == water:
                    perimeter += 1
                if (y + 1) == len(grid) or grid[y + 1][x] == water:
                    perimeter += 1

    return perimeter
