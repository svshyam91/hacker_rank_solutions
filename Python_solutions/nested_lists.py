""" Nested Lists problem on Hacker Rank
    Problem Link: https://www.hackerrank.com/challenges/nested-list/problem
    
    Author: Shyam Kumar
"""

def takeSecond(elem):
    """ This function returns the second element of the list is accepts"""
    
    return elem[1]

if __name__ == '__main__':
    phy = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        
        # Making a nested list
        phy.append([name,score])
    
    # Sorting the nested list according to score
    phy.sort(key=takeSecond)
    
    # Finding the minimum value
    m = min(phy, key = takeSecond)
    
    # Initializing the second lowest to be 0
    sec_low = 0
    
    names = []
    
    # After sorting, the lowest value will be first value of the list so copying it to low
    low = phy[0][1]
    
    # Looping through the list to find the second lowest number
    for p in phy:
        if(p[1] > low):
            sec_low = p[1]
            break
            
    # Looping to find the names who have score equal to second lowest 
    # and adding their names to list of names
    for p in phy:
        if(p[1] == sec_low):
            names.append(p[0])
    
    # Sorting the name list alphabetically
    names.sort()
            
    # Printing the name from names list
    for name in names:
        print(name)
        
