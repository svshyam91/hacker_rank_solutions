"""
	Company Logo Problem on HackerRank
	Problem Link: https://www.hackerrank.com/challenges/most-commons/problem

	Author: Shyam Kumar

"""


from collections import Counter,OrderedDict

if __name__ == '__main__':
	s=input()

	# Sort the string to arrange the letters in alphabetical order
	s=sorted(s)

	count_dict=Counter(s)

	# Counter dictionary does not return the elements in any specified order.
	# So, we sort the dictionary according to its value in reverse order.
	# Here, order_dict is a list consist of keys of count_dict.
	order_dict=sorted(count_dict, key=count_dict.get, reverse=True)

	# Now, print the first three elements of the count_dict
	for i in [0,1,2]:
		print(order_dict[i],count_dict[order_dict[i]])
	