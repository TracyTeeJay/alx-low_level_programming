#!/usr/bin/python3
"""
function to outpuut island parameter given a grid
"""


def island_perimeter(grid):
    """
    returns island parameter

    Args:
    grid(list): integer list that represents island(1), water(0)
    """
    islWidth = len(grid[0])
    islHeight = len(grid)
    islEdges = 0
    islSize = 0

    for cnt in range(islHeight):
        for cnt1 in range(islWidth):
            if grid[cnt][cnt1] == 1:
                islSize += 1
                if (cnt1 > 0 and grid[cnt][cnt1 - 1] == 1):
                    islEdges += 1
                if (cnt > 0 and grid[cnt - 1][cnt1] == 1):
                    islEdges += 1
    return islSize * 4 - islEdges * 2
