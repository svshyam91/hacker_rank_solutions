"""
    Luck Balance Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/luck-balance/problem

    Author: Shyam Kumar  (@svshyam91)

"""

def luckBalance(k, imp_contest, unimp_contest):
    max_luck=sum(unimp_contest)
    imp_contest.sort(reverse=1)
    for c in imp_contest:
        if k > 0:
            max_luck+=c
            k-=1
        else:
            max_luck-=c
    return max_luck

if __name__ == '__main__':
    nk = input().split()
    n = int(nk[0])
    k = int(nk[1])

    contests = []
    unimp_contest=[]
    imp_contest=[]

    for _ in range(n):
        lt=list(map(int,input().split()))
        if lt[1] == 0:
            unimp_contest.append(lt[0])
        else:
            imp_contest.append(lt[0])
    
    result = luckBalance(k, imp_contest, unimp_contest)
    print(result)