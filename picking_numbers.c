/* 
    Picking Numbers Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/picking-numbers/problem

    Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

int picking_numbers( int n, int *arr ) {
	int count[100]={0}, i;

	// Counting each number
	for(i = 0; i < n; i++) {
		count[arr[i]]++;
	}

	int set[100]={0};
	// Storing the number of elements in set having absolute difference 1
	for(i = 1; i < n; i++) {

		/* Process only those elements which are in the given set 
		 means having count not equal to 0 */
		if( count[i] != 0 ) {

			/* Store the count of set of element i and i-1 */
			set[i] = count[i] + count[i-1];

			/* If the stored count is less than the count of set of element
			 i and i+1 then store this count */
			if( set[i] < (count[i]+count[i+1]) ) 
				set[i] = count[i]+count[i+1];
		}
	}
	
	// Finding the set having maximum size
	int max = 0;
	for(i = 0; i < 100; i++)
		if( max < set[i] )
			max = set[i];

	return max;
}

int main(int argc, char const *argv[])
{
	int n, i, ans;
	scanf("%d",&n);
	int arr[n];
	for(i=0; i < n; i++)
		scanf("%d",&arr[i]);
	ans = picking_numbers(n, arr);
	printf("%d", ans);
	return 0;
}