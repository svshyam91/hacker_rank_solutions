""" 
    Super Reduced String Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/reduced-string/problem

    Author: Shyam Kumar (@svshyam91)

"""

def superReducedString(s):
    i=0
    while s and (i < len(s)-1):
        if s[i] == s[i+1]:
            s=s[:i]+s[i+2:]
            i=0
        else:
            i+=1
    if s:
        return s
    else:
        return "Empty String"


if __name__ == '__main__':
    s = input()

    result = superReducedString(s)
    print(result)