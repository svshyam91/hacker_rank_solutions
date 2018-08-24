/*
	Divisible Sum Pairs Problem on Hacker Rank
	Problem Link: https://www.hackerrank.com/challenges/divisible-sum-pairs/problem

	Author: Shyam Kumar


*/

#include <stdio.h>
#include <stdlib.h>

int divisible_sum_pairs( int n, int *arr, int k ) {
	int i,j,count = 0;

	/* These for loops generate the pairs */
	for(i = 0; i < n-1; i++ ) {
		for( j = i+1; j < n; j++ ) {

			/* This condition checks whether the pairs are divisible by k or not */
			if( (arr[i] + arr[j]) % k == 0 ) {
				count++;
			}
		}
	}

	return count;
}

int main(int argc, char const *argv[])
{
	int n, k, count, i;

	printf("Enter the value of n:");
	scanf("%d",&n);

	printf("\nEnter the value of k:");
	scanf("%d",&k);

	int *arr = (int*)malloc(sizeof(int));
	printf("\nEnter the array:");
	for( i = 0; i < n; i++ ) 
		scanf("%d",&arr[i]);

	count = divisible_sum_pairs( n, arr, k );
	printf("\nThe number of such pairs are: %d", count);
	return 0;
}
