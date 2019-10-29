"""
    Weighted Uniform String Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/weighted-uniform-string/problem

    Author: Shyam Kumar (@svshyam91)

"""

def weightedUniformStrings(s, queries):
    U=set()
    U.add(ord(s[0])-96)     # Add ASCII of 1st character in set
    count=1
    for i in range(1,len(s)):
        if s[i] == s[i-1]:  
            count+=1
            U.add(count*(ord(s[i])-96))
        else:
            count=1
            U.add(count*(ord(s[i])-96))

    for q in queries:
        if q in U:
            print("Yes")
        else:
            print("No")

if __name__ == '__main__':
    s = input()
    queries_count = int(input())

    queries = []

    for _ in range(queries_count):
        queries_item = int(input())
        queries.append(queries_item)

    weightedUniformStrings(s, queries)