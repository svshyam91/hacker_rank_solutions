/* 
    Counting Valleys Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/counting-valleys/problem

    Author: Shyam Kumar

*/

#include <stdio.h>

void counting_valleys( char *str, int size ) {
    int i, status=0, count=0;
    for( i = 0; i < size; i++ ) {
        if( str[i] == 'U' )
            status+=1;
        else
            status-=1;

        // printf("status: %d",status);

        if( status == -1 && str[i] == 'D' )
            count++;
    }
    printf("%d",count);
}

int main(int argc, char const *argv[])
{
    int size, ans;
    scanf("%d ",&size);
    char str[size];
    fgets(str, size, stdin);
    counting_valleys( str,size );
    return 0;
}
