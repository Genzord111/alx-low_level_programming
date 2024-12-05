#!/usr/bin/python3
"""Module to calculate the perimeter of an island in a grid."""


def island_perimeter(grid):
    """
    Calculate the perimeter of an island in a grid.

    Args:
        grid (list of list of int):
                A 2D grid representing water and land zones.
                0 represents water, 1 represents land.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                # Check adjacent cells (up, down, left, right)
                # If out of bounds or water, it contributes to perimeter
                if r == 0 or grid[r-1][c] == 0:  # Top
                    perimeter += 1
                if r == rows-1 or grid[r+1][c] == 0:  # Bottom
                    perimeter += 1
                if c == 0 or grid[r][c-1] == 0:  # Left
                    perimeter += 1
                if c == cols-1 or grid[r][c+1] == 0:  # Right
                    perimeter += 1

    return perimeter
