""" 
    Jim and the Orders Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/jim-and-the-orders/problem

    Author: Shyam Kumar (@svshyam91)

"""

def jimOrders(orders):
    serveTime=[]
    for i in range(len(orders)):
        serveTime.append( [ orders[i][0] + orders[i][1], i+1 ] )
    
    serveTime.sort()

    for i in range(len(serveTime)):
        print(serveTime[i][1], end=" ")
    

if __name__ == '__main__':
    n = int(input())

    orders = []

    for _ in range(n):
        orders.append(list(map(int, input().rstrip().split())))

    jimOrders(orders)
    # print(result)