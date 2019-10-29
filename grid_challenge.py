"""
    Grid Challenge Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/grid-challenge/problem

    Author: Shyam Kumar (@svshyam91)

"""

def gridChallenge(grid):
    sorted_grid=[]
    l=len(grid[0])
    for strg in grid:

        # Sort the string and append it to the list
        sorted_strg="".join(sorted(strg))
        sorted_grid.append(sorted_strg)
    
    for i in range(l):
        st=""
        for strg in sorted_grid:
            st+=strg[i]     # Make string from 1st character of every string in grid
        if st != "".join(sorted(st)):       # Check if the string is sorted
            return "NO"
            
    return "YES"

if __name__ == '__main__':
    t = int(input())

    for t_itr in range(t):
        n = int(input())

        grid = []

        for _ in range(n):
            grid_item = input()
            grid.append(grid_item)

        result = gridChallenge(grid)
        print(result)
