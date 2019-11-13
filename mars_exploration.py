"""
    Mars Exploration Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/mars-exploration/problem

    Author: Shyam Kumar (@svshyam91)
    Date: 13-11-2019

"""

def marsExploration(s):
    sos="SOS"*(len(s)//3)
    return sum([ s[i]!=sos[i] for i in range(len(s)) ])        

if __name__ == '__main__':
    s = input()
    result = marsExploration(s)
    print(result)