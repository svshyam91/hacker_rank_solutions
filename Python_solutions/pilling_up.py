"""
    Pilling Up problem on Hacker Rank
    Problem Link: https://www.hackerrank.com/challenges/piling-up/problem

    
    Author: Shyam Kumar
    Date: 18th October, 2019
"""
from collections import deque

def pilling_up(d):
    pile=[]
    i=0
    j=len(d)-1
    while i < j:
        if d[i] < d[j]:
            pile.append(d[j])
            j-=1
        elif d[i] > d[j]:
            pile.append(d[i])
            i+=1
        else:
            pile.append(d[i])
            pile.append(d[j])
            i+=1
            j-=1
    if i == j:
        pile.append(d[i])
    for i in range(1,len(pile)):
        if pile[i-1] < pile[i]:
            return("No")
    return("Yes")

t=int(input())
for _ in range(t):
    n=input()
    d=deque()
    cubes=list(map(int, input().split()))
    [d.append(e) for e in cubes]
    ans=pilling_up(d)
    print(ans)

