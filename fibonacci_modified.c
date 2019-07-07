/* 
	Fibonacci Modified Problem on HackerRank
	Problem Link: https://www.hackerrank.com/challenges/fibonacci-modified/problem

	Note: This solution is based on Dynamic Programming (Memoization)
		This solution doesn't work for large numbers. Needs improvement..
		For larger numbers, see my python solution.

	Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

unsigned long int *lookup;

unsigned long int fibonacci_modified( int n ) {

	if( lookup[n] == -1 )
		lookup[n] = fibonacci_modified(n-2) +
		 ((fibonacci_modified(n-1))*fibonacci_modified(n-1)) ;
	return lookup[n];

}

void initialize( int n ) {
	int i;
	for(i = 0; i < n; i++ ) 
		lookup[i] = -1;

	return;
}

int main(int argc, char const *argv[])
{
	int t1, t2, tn;
	unsigned long int ans;

	printf("Enter the value of t1, t2, tn:");
	scanf("%d %d %d", &t1, &t2, &tn);
	lookup = (unsigned long int*)malloc( tn+1 * sizeof(unsigned long int));

	initialize( tn+1 );
	lookup[1] = t1;
	lookup[2] = t2;
	ans = fibonacci_modified( tn );
	printf("\nAns = %lu", ans);

	return 0;
}