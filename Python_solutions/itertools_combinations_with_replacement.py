"""
	itertools.combinations-with-replacement Problem on HackerRank
	Problem Link: https://www.hackerrank.com/challenges/itertools-combinations-with-replacement/problem

	Author: Shyam Kumar

"""

from itertools import combinations_with_replacement

str,n=input().split()
str=sorted(str)
n=int(n)

for t in combinations_with_replacement(str,n):
    print("".join(t))