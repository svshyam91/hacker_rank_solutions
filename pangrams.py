""" 
	Pangrams Problem on HackerRank
	Problem Link: https://www.hackerrank.com/challenges/pangrams/problem

	Author: Shyam Kumar (@svshyam91)

"""

import string

def pangrams(s):
    s=s.lower()
    for c in string.ascii_lowercase:
        if c not in s:
            return "not pangram"
    return "pangram"


if __name__ == '__main__':
    s = input()

    result = pangrams(s)
    print(result)