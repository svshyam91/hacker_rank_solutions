/* 
	Bon Apetite Problem on HackerRank
	Problem Link: https://www.hackerrank.com/challenges/bon-appetit/problem?h_r=next-challenge&h_v=zen

	Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

int bon_appetit( int *arr, int size, int no_eat, int anna_bill ) {
	int sum=0, b_actual, i;
	for( i=0; i<size; i++ )
		sum+=arr[i];
	b_actual = (sum - arr[no_eat])/2;
	if( b_actual == anna_bill )
		return 0;
	else
		return (anna_bill-b_actual);
}

int main(int argc, char const *argv[])
{
	int size, no_eat, anna_bill, i, ans;
	scanf("%d %d",&size, &no_eat);
	int arr[size];
	for( i=0; i < size; i++ ) {
		scanf("%d",&arr[i]);
	}
	scanf("%d",&anna_bill);
	ans = bon_appetit(arr, size, no_eat, anna_bill);
	if( ans == 0 )
		printf("Bon Appetit");
	else
	printf("%d", ans);
	return 0;
}
