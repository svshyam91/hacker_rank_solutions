#include <stdio.h>
#include <math.h>

int sherlock_and_square( int a, int b ) {

	int f_sq, l_sq, sq, count; 

	sq = sqrt(a);
	if(sq*sq == a)
		f_sq = sq;
	else
		f_sq = sq+1;
	l_sq = sqrt(b);
	count = l_sq-f_sq+1;

	return count;
}

int main(int argc, char const *argv[])
{
	int a, b, t, i;

	printf("Enter the number of test cases:");
	scanf("%d",&t);

	for( i = 0; i < t; i++ ) {
		printf("Enter the value of a:");
		scanf("%d",&a);
		printf("Enter the value of b:");
		scanf("%d",&b);
		ans = sherlock_and_square( a, b );
		printf("The number of square are: %d\n",ans);
	}

	return 0;
}