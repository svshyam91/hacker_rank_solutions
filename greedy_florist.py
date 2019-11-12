""" 
    Greedy Florist Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/greedy-florist/problem

    Author: Shyam Kumar (@svshyam91)
    Date: 12th Nov. 2019

"""

def getMinimumCost(k, c):
    c.sort(reverse=True)
    min_cost=sum(c[:k])
    tmp=0
    for i in range(k,len(c)):
        if i % k == 0:
            tmp+=1
        min_cost+=(tmp+1)*c[i]

    return min_cost

if __name__ == '__main__':
    nk = input().split()
    n = int(nk[0])

    k = int(nk[1])

    c = list(map(int, input().rstrip().split()))

    minimumCost = getMinimumCost(k, c)
    print(minimumCost)
