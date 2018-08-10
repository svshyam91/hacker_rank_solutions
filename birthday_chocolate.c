#include <stdio.h>
#include <stdlib.h>

int birthday_chocolate( int n, int *arr, int d, int m ) {

	int i, j, count = 0, sum = 0;
	for( i = 0; i < n; i++ ) {
		sum = 0;

		for( j = 0; j < m && j < n; j++ ) {
			sum += arr[i+j];
		}
		if( sum == d )
			count++;
	}
	return count;
}

int main(int argc, char const *argv[])
{

	int n, i, m, d, ans;

	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the array:");

	int *arr = (int*)malloc( n * sizeof( int ) );

	for( i = 0; i < n; i++ ) 
		scanf("%d",&arr[i]);
	printf("Enter the value of d:");
	scanf("%d",&d);
	printf("Enter the value of m:");
	scanf("%d",&m);

	ans = birthday_chocolate( n, arr, d, m );
	printf("Ans: %d", ans);

	return 0;
}