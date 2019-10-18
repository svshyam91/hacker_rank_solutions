"""
	Sock Merchant Problem on HackerRank
	Problem Link: https://www.hackerrank.com/challenges/sock-merchant/problem

	Author: Shyam Kumar

"""


def sock_merchant(n,lst):
	dic={}

	# Initializing the dictionary
	for e in lst:
		dic[e]=0

	# Counting the elements 
	for e in lst:
		dic[e]+=1

	# Counting the pairs
	count=0
	for k,v in dic.items():
		count+=v//2

	print(count)


def main():
	n=int(input())
	lst=list(map(int,input().split()))
	sock_merchant(n,lst)

if __name__ == '__main__':
	main()