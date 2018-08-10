// Save the Prisoner

#include <stdio.h>

int save_the_prisoner( int n, int m, int s ) {

	int c1, warned_prisoner;
	// Distributing the candies when start is not from 1st person

	c1 = n-s+1;

	/* From the above equation the answer could be equal to n in which case
	we have to start from 1st person. So we ignore it. */

	if( c1 == n )	 
		c1 = 0;

	/* When there is no need to repeat*/

	if( c1 > m )
		return s+m-1;

	m = m - c1;

	/* Now we have to distribute from 1st person */

	warned_prisoner = m % n;

	if( warned_prisoner == 0 )
		warned_prisoner = n;

	return warned_prisoner;
}

int main(int argc, char const *argv[])
{
	int n, m, s, t, i;

	printf("Enter the number of test cases:");
	scanf("%d",&t);
	for( i = 0; i < t; i++ ) {

		printf("Enter the value of n:");
		scanf("%d",&n);
		printf("Enter the value of m:");
		scanf("%d",&m);
		printf("Enter the value of s:");
		scanf("%d",&s);
		int ans = save_the_prisoner(n, m, s);
		printf("The answer is %d",ans);
	}
	return 0;
}