/* 
	Breaking The Records Problem on HackerRank
	Problem Link: https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

	Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

void breaking_the_records( int *arr, int n ) {
	int max, count_max=0, min, count_min=0, i;
	max=arr[0];
	min=arr[0];
	for( i = 1; i < n; i++ ) {
		if( arr[i] < min ){
			count_min++;
			min=arr[i];
		}
		if( arr[i] > max ){
			count_max++;
			max=arr[i];
		}
	}
	printf("%d %d",count_max, count_min);
	return;
}

int main(int argc, char const *argv[])
{
	int n, i;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array:");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
	}
	breaking_the_records(arr, n);
	return 0;
}