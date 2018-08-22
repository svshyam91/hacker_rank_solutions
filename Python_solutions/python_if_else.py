""" Python If-Else Problem on Hacker Rank
    Problem Link: https://www.hackerrank.com/challenges/py-if-else/problem
    
    Author: Shyam Kumar
"""

if __name__ == '__main__':
	
	N = int(input())
	if N%2 is not 0:
	    print("Weird")
	elif N%2 == 0 and N >=2 and N <= 5:
	    print("Not Weird")
	elif N%2 == 0 and N >= 6 and N <= 20:
	    print("Weird")
	elif N%2 == 0 and N > 20:
	    print("Not Weird")

