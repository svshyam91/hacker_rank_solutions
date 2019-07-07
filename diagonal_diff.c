/* 
	Diagonal Difference Problem on HackerRank
	Problem Link: https://www.hackerrank.com/challenges/diagonal-difference/problem

	Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, i, j, sum1 = 0, sum2 = 0;

	scanf("%d",&n);

	int **arr = (int**)malloc( n * sizeof( int *) );
	for( i = 0; i < n; i++ )
		arr[i] = ( int* )malloc( n * sizeof(int ));

	printf("\nEnter the matrix: ");
	for( i = 0; i < n; i++ ) {
		for( j = 0; j < n; j++ ) {
			scanf("%d", &arr[i][j]);
		}
	}

	for( i = 0; i < n; i++ ) {
		for( j = 0; j < n; j++ ) {
			if( i == j )
				sum1 = sum1 + arr[i][j];
			if( i+j == n-1 )
				sum2 = sum2 + arr[i][j];
		}
	}
	printf("ans = %d", abs(sum1-sum2));

	return 0;
}