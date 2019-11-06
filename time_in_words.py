"""
    The time in words Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/the-time-in-words/problem

    Author: Shyam Kumar (@svshyam91)

"""

def timeInWords(h, m):
    num_in_str={1:"one",2:"two",3:"three",4:"four",5:"five",6:"six",7:"seven",
                        8:"eight",9:"nine",10:"ten",11:"eleven",12:"twelve",                                    13:"thirteen", 14:"fourteen", 15:"fifteen", 16:"sixteen",
                        17:"seventeen", 18:"eighteen", 19:"nineteen", 20:"twenty",
                        21:"twenty one", 22:"twenty two", 23:"twenty three", 24:"twenty                             four", 25:"twenty five", 26:"twenty six", 27:"twenty seven", 28:"twenty eight", 29:"twenty nine",}
    if m > 0 and m < 30 and m != 15:
        if m == 1:
            time_str=num_in_str[m]+" minute past "+num_in_str[h]
        else:    
            time_str=num_in_str[m]+" minutes past "+num_in_str[h]
    elif m > 30 and m < 60 and m != 45:
        time_str=num_in_str[60-m]+" minutes to "+num_in_str[h+1]
    elif m == 15:
        time_str="quarter past "+num_in_str[h]
    elif m == 45:
        time_str="quarter to "+num_in_str[h+1]
    elif m == 0:
        time_str=num_in_str[h]+" o' clock"
    elif m == 30:
        time_str="half past "+num_in_str[h]
    return time_str
    

if __name__ == '__main__':
    h = int(input())

    m = int(input())

    result = timeInWords(h, m)
    print(result)