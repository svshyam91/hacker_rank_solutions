""" 
    Sherlock and The Beast Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/sherlock-and-the-beast/problem

    Author: Shyam Kumar (@svshyam91)

"""

def decentNumber(n):
    n3 = 0
    n5 = n
    while(1):
        if n5 % 3 == 0 and n3 % 5 == 0:
            return("5" * n5 + "3" * n3)
        elif n5 % 3 != 0 and n5 >= 5:
            n5 -= 5
            n3 += 5
        else:
            return("-1")


if __name__ == '__main__':
    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        ans = decentNumber(n)
        print(ans)
