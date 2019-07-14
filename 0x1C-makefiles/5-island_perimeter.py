#!/usr/bin/python3
"""A module for the island_perimeter method"""


def island_perimeter(grid):
    """A method that returns the perimeter"""
    count = 0

    for row in grid:
        row.insert(0, 0)
        row.append(0)

    for grid_idx, row in enumerate(grid):
        for row_idx, val in enumerate(row):
            if val == 1:
                if grid[grid_idx][row_idx - 1] != 1:
                    count += 1
                if grid[grid_idx][row_idx + 1] != 1:
                    count += 1
                if grid[grid_idx - 1][row_idx] != 1:
                    count += 1
                if grid[grid_idx + 1][row_idx] != 1:
                    count += 1
    return count
