"""
	itertools.permutations Problem on HackerRank
	Problem Link: https://www.hackerrank.com/challenges/itertools-permutations/problem

	Author: Shyam Kumar

"""

from itertools import permutations

str,n=input().split()
n=int(n)

str=sorted(str)
ans=permutations(str,n)
for i in ans:
	print("".join(i)