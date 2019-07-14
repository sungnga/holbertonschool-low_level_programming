#!/usr/bin/python3
"""A module for the island_perimeter method"""


def island_perimeter(grid):
    """A method that returns the perimeter"""
    count = 0
    for row in grid:
        row.insert(0, 0)
        row.append(0)
    grid.insert(0, [0 for i in range(len(row) + 2)])
    grid.append([0 for i in range(len(row) + 2)])
    for grid_idx, row in enumerate(grid):
        for row_idx, val in enumerate(row):
            if val == 1:
                if grid[grid_idx][row_idx - 1] == 0:
                    count += 1
                if grid[grid_idx][row_idx + 1] == 0:
                    count += 1
                if grid[grid_idx - 1][row_idx] == 0:
                    count += 1
                if grid[grid_idx + 1][row_idx] == 0:
                    count += 1
    return count
