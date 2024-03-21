#!/usr/bin/python3
"""
perimeter of island
"""


def island_perimeter(grid):
    """returns perimeter of the island
    Args:
         grid (list) = list of integers
    """

    wid = len(grid[0])
    hei = len(grid)
    ed = 0
    size = 0

    for i in range(hei):
        for j in range(wid):
            if grid[i][j] == 1:
                size += 1
                # checking for boundery or a lake
                if (j > 0 and grid[i][j - 1] == 1):
                    ed += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    ed += 1
    return size * 4 - ed * 2
