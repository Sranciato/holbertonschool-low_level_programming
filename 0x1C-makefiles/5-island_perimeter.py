#!/usr/bin/python3
"""returns the perimeter of the island"""


def island_perimeter(grid):
    """return the perimeter of the island"""
    count = lis = val = check = 0

    for lis in range(len(grid)):
        for val in range(len(grid[lis])):
            if check == 1:
                check = 0
                continue
            if grid[lis][val] == 1:
                try:
                    if grid[lis - 1][val] == 0:
                        count += 1
                    if grid[lis][val - 1] == 0:
                        grid[lis][val - 1] = 1
                        count += 1
                    if grid[lis][val + 1] == 0:
                        grid[lis][val + 1] = 1
                        check = 1
                        count += 1
                    if grid[lis + 1][val] == 0:
                        count += 1
                except:
                    pass
    return count + 1
