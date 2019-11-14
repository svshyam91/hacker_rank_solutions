"""
    Priyanka and Toys Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/priyanka-and-toys/problem

    Author: Shyam Kumar (@svshyam91)

"""


def toys(w):
    w.sort()
    min_w = w[0]
    container = 1
    for i in range(1, len(w)):
        if min_w + 4 < w[i]:
            container += 1
            min_w = w[i]
    return container


if __name__ == '__main__':
    n = int(input())
    w = list(map(int, input().rstrip().split()))
    result = toys(w)
    print(result)
