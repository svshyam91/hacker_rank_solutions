""" 
    Ceasar Cipher Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/caesar-cipher-1/problem

    Author: Shyam Kumar (@svshyam91)
    Date: 28th Oct. 2019

"""


def caesarCipher(s, k):
    cip = ""
    for c in s:
        if c.isupper():
            d = ((ord(c) - 64 + k) % 26)
            if d:
                d += 64
            else:
                d = 90
            cip += chr(d)
        elif c.islower():
            d = (((ord(c) - 96) + k) % 26)
            if d:
                d += 96
            else:
                d = 122
            print("c:", c, "d:", d)
            cip += chr(d)
        else:
            cip += c
    return cip


if __name__ == '__main__':
    n = int(input())
    s = input()
    k = int(input())

    result = caesarCipher(s, k)
    print(result)
