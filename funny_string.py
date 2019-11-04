""" 
    Funny Strings Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/funny-string/problem

    Author: Shyam Kumar (@svshyam91)

"""


def funnyString(s):

    # Make the list of ascii of characters of string
    ascii_str=[ord(c) for c in s]       
    ascii_str_rev=ascii_str[::-1]       # Reverse the ascii list
    for i in range(1,len(ascii_str)):
        if abs(ascii_str[i]-ascii_str[i-1]) != abs(ascii_str_rev[i]-ascii_str_rev[i-1]):
            return "Not Funny"
    return "Funny"


if __name__ == '__main__':
    q = int(input())

    for q_itr in range(q):
        s = input()

        result = funnyString(s)
        print(result)