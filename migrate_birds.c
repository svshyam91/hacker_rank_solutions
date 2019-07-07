/* 
	Migratory Bird Problem on HackerRank
	Problem Link: https://www.hackerrank.com/challenges/migratory-birds/problem

	Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

int migrate_birds( int *arr, int n ) {

	int dict[6] = {0}, max, i, index;

	// Counting the number of occurence of each element 
	for( i = 0; i < n; i++ ) 
		dict[arr[i]]++;

	max = dict[5];
	for( i = 4; i >= 1; i-- )
		if( dict[i] >= max ) {
			max = dict[i];
			index = i;
		}

	return index;
}

int main(int argc, char const *argv[])
{
	int n, i, ans;
	printf("Enter the value of n:");
	scanf("%d",&n);

	int *arr = (int*)malloc( n * sizeof(int));

	printf("\nEnter the array:");
	for( i = 0; i < n; i++ )
		scanf("%d",&arr[i]);

	ans = migrate_birds( arr, n );

	printf("Ans = %d",ans);

	return 0;
}
