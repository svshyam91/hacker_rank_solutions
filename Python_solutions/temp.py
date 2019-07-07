from itertools import combinations

size=int(input())
l=input().split()
ln=len(l)
k=int(input())
lst=[]
for k,c in enumerate(l):
	if(c == 'a'):
		lst.append(k+1)

print(lst)

r=2
count=0
ans=list(combinations(range(1,ln+1),r=2))
for t in ans:
    a=t[0]
    b=t[1]
    if a in lst or b in lst:
    	count+=1
    print("(",a,", ",b,") ",sep="",end="")

print(round(count/len(ans),4))

