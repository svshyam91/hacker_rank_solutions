""" 
	Two Characters Problem on HackerRank
	Problem Link: https://www.hackerrank.com/challenges/two-characters/problem

	Author: Shyam Kumar
	Date: 26/10/2019

"""

from itertools import combinations

def check_alternate(str_of_two):
	''' Checks weather the string has alternate characters
		and returns the length of string if it has, else 0.'''

	l=len(str_of_two)
	for i in range(1,l):
		if str_of_two[i] == str_of_two[i-1]:
			return 0
	return l

def alternate(s):
	''' Creates the combination of 2 alternate character strings 
		and returns the max length string. '''

	# Create set to remove repeating characters
	st=set(s)

	# Make the combination of 2-2 characters
	com=combinations(st,2)
	max_len=0	# To store the max. length of alternate string
	for tup in com:		# For each combination
		str_of_two=s
		for c in s:	
			# If the character of the string does not matches with the
			# combination character, then remove those characters

			if c != tup[0] and c != tup[1]:
				str_of_two=str_of_two.replace(c,"")

		len_of_str=check_alternate(str_of_two)
		if max_len < len_of_str:
			max_len=len_of_str
	return max_len


if __name__ == '__main__':
    l = int(input().strip())
    s = input()
    leng=alternate(s)
    print(leng)
