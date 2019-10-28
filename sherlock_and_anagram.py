"""
    Sherlock and Anagram Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/sherlock-and-anagrams/problem

    Author: Shyam Kumar (@svshyam91)

"""

""" Steps to Solve the problem:
	1. Create substrings 
	2. Make group of substrings according to their length
	3. For every group, for every pair in group 
		Check whether the strings are anagram or not using sorting.
"""

from itertools import combinations
from collections import Counter,defaultdict

def sherlockAndAnagrams(s):
	count=0
	# substrings=[ s[i:j] for i,j in combinations(range(len(s)+1),2)]
	d=defaultdict(list)

	# Create dictionary with key as length of substring 
	#+ and value as list of all substrings with the length == key.
	for i,j in combinations(range(len(s)+1),2):
		d[j-i].append(s[i:j])

	# Iterate over each value of dictionary i.e. list and
	# make pairs of elements of list.
	for k,v in d.items():
		for i in range(len(v)-1):
			for j in range(i+1, len(v)):

				""" sort each string and join to make string and then 
					compare to check whether the strings are anagram or not.
					Since, we had already seperated the substrings according 
					to their length. 
					So, we don't have to care about length of the string here.
				"""
				if "".join(sorted(v[i])) == "".join(sorted(v[j])):
					count+=1
	return count

if __name__ == '__main__':
    q = int(input())
    for q_itr in range(q):
        s = input()
        ans=sherlockAndAnagrams(s)
        print(ans)