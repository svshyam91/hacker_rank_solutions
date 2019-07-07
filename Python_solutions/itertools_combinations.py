"""
	itertools.combinations Problem on HackerRank
	Problem Link: https://www.hackerrank.com/challenges/itertools-combinations/problem

	Author: Shyam Kumar

"""

from itertools import combinations

str,n=input().split()
str=sorted(str)
n=int(n)

for i in range(1,n+1):
    for t in combinations(str,i):
        print("".join(t))