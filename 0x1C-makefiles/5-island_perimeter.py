#!/usr/bin/python3
"""A module for the island_perimeter method"""


def island_perimeter(grid):
    """A method that returns the perimeter"""
    count = 0
    for i, row in enumerate(grid):
        for j, val in enumerate(row):
            if val == 1:
                if grid[i][j-1] != 1:
                    count += 1
                if grid[i][j+1] != 1:
                    count += 1
                if grid[i-1][j] != 1:
                    count += 1
                if grid[i+1][j] != 1:
                    count += 1
    return count
