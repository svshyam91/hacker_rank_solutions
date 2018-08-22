""" List comprehensions problem on Hacker Rank 
    Problem Link: https://www.hackerrank.com/challenges/list-comprehensions/problem
    
    Author: Shyam Kumar
    
"""
x = int ( input())
y = int ( input()) 
n = int ( input()) 
new_list =  [ [ i, j] for i in range( x + 1) for j in range( y + 1) if ( ( i + j ) != n )]
print (new_list)
