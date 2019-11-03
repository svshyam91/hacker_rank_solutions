""" 
    Append and Delete Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/append-and-delete/problem

    Author: Shyam Kumar (@svshyam91)

"""


def anagram(s):
    leng = len(s)
    count = [0] * 26  # List for counting the characters

    # Dividing the string into two equal strings
    s1 = s[:leng // 2]
    s2 = s[leng // 2:]

    # If the length of the string is not equal then return -1
    if len(s1) != len(s2):
        return -1

    # Count the number of characters in first string (s1)
    for i in range(len(s1)):
        count[ord(s1[i]) - 97] += 1

    # Decrease the count if the character of the first string
    # matches with that of the second string or decrease the value.
    for i in range(len(s2)):
        count[ord(s2[i]) - 97] = count[ord(s2[i]) - 97] - 1

    # Make all the values of the count array positive, sum and
    # divide it by 2 and return.
    return int(sum(map(abs, count)) / 2)


if __name__ == '__main__':
    q = int(input())

    for q_itr in range(q):
        s = input()

        result = anagram(s)
        print(result)
