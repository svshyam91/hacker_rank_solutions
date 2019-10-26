"""
    Sparse Array Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/sparse-arrays/problem

    Author: Shyam Kumar

"""

# Complete the matchingStrings function below.
def matchingStrings(strings, queries):
    ans=[]
    for q in queries:
        count=0
        for s in strings:
            if s==q:
                count+=1
        ans.append(count)
    return ans


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    strings_count = int(input())

    strings = []

    for _ in range(strings_count):
        strings_item = input()
        strings.append(strings_item)

    queries_count = int(input())

    queries = []

    for _ in range(queries_count):
        queries_item = input()
        queries.append(queries_item)

    res = matchingStrings(strings, queries)

    fptr.write('\n'.join(map(str, res)))
    fptr.write('\n')

    fptr.close()
