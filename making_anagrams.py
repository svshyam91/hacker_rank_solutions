""" 
    Making Anagrams on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/making-anagrams/problem

    Author: Shyam Kumar (@svshyam91)
    Date: 16-11-2019

"""
from collections import Counter

def makingAnagrams(s1, s2):
    count_s1 = Counter(s1)
    count_s2 = Counter(s2)
    count = sum(count_s1.values())
    for k in count_s1.keys():
    	if k in count_s2.keys():
    		count += 2*min(count_s1[k], count_s2[k])

    return count
        
if __name__ == '__main__':
    s1 = input()

    s2 = input()

    result = makingAnagrams(s1, s2)
    print(result)