"""
    Mark and Toys Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/mark-and-toys/problem

    Author: Shyam Kumar (@svshyam91)

"""


def maximumToys(prices, k):
    prices.sort()
    i = 0
    count = 0
    while k >= prices[i]:
        k -= prices[i]
        count += 1
        i += 1
    return count


if __name__ == '__main__':

    nk = input().split()
    n = int(nk[0])
    k = int(nk[1])
    prices = list(map(int, input().rstrip().split()))
    result = maximumToys(prices, k)
    print(result)
