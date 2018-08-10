// Circular Array Rotation

#include <stdio.h>
#include <stdlib.h>

int* circular_array_rotation( int n, int *arr, int k ) {

	int i, r, pos;

	/* Array for storing rotated elements */
	
	int *ans_arr = (int *)malloc( n * sizeof( int) );

	for( i = 1; i < n+1; i++ ) {
		r = i + k;
		pos = r % n;
		if( pos == 0 )
			pos = n;
		ans_arr[pos-1] = arr[i-1];
	}

	return ans_arr;
}

int main(int argc, char const *argv[])
{
	int n, k, q, i;

	printf("Enter the value of n:");		// Elements in array
	scanf("%d",&n);
	printf("Enter the value of k:");		// Rotation Count
	scanf("%d",&k);
	printf("Enter the value of q:");		// Number of queries
	scanf("%d",&q);

	int *arr = (int*)malloc(n * sizeof(int));
	int *queries = (int*)malloc(q * sizeof(int));

	printf("Enter the array:");
	for( i = 0; i < n; i++ )		// Input Array
		scanf("%d",&arr[i]);

	printf("Enter the queries:");
	for( i = 0; i < q; i++ )		// Input Queries
		scanf("%d",&queries[i]);


	int *ans_arr = circular_array_rotation( n, arr, k );

	for( i = 0; i < q; i++ ) 
		printf("%d\n", ans_arr[ queries[i] ]);

	return 0;
}