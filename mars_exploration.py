"""
    Mars Exploration Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/mars-exploration/problem

    Author: Shyam Kumar (@svshyam91)
    Date: 13-11-2019

"""

def marsExploration(s):
    count=0
    sos="SOS"*(len(s)//3)
    for i in range(len(s)): 
        if s[i] != sos[i]:
            count+=1
    return count        

if __name__ == '__main__':
    s = input()
    result = marsExploration(s)
    print(result)