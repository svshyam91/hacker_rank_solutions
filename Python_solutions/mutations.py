"""
	Mutations problem on Hacker Rank
	Problem Link: https://www.hackerrank.com/challenges/python-mutations/problem

	
	Author: Shyam Kumar

"""

def mutations(string, index, c):

	# Replacing the character
	string[index] = c

	# Converting list to string
	string = "".join(string)

	return string

def main():

	# Input string
	string = list(input())

	# Input index and character
	l = input().split()

	# Save index in index variable
	index = int( l[0] )

	# Save character in c variable
	c = l[1]

	# Calling mutations function
	string = mutations( string, index, c )

	print(string)


if __name__ == '__main__':
	main()
