#!/usr/bin/python3
"""
island perimeter
"""


def island_perimeter(grid):
    """
    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100.

    Grid is completely surrounded by water, and there is one island
    The island doesn’t have “lakes
    """
    perimeter = 0
    for x in range(len(grid)):
        for y in range(len(grid[0])):
            if grid[x][y]:
                if y == 0 or not grid[x][y - 1]:
                    perimeter += 1
                if y == len(grid[0]) - 1 or not grid[x][y + 1]:
                    perimeter += 1
                if x == 0 or not grid[x - 1][y]:
                    perimeter += 1
                if x == len(grid) - 1 or not grid[x + 1][y]:
                    perimeter += 1
    return perimeter
