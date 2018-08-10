// Modified Karpekar Number

#include <stdio.h>
#include <stdlib.h>

int flag = 0;		// For INVALID RANGE

int num_of_digits( unsigned long int num ) {
	/* This function counts the number of digits in a number */

	int len = 0;

	while( num ) {
		len++;
		num /= 10;
	}
	return len;
}

char* int_to_str( unsigned long int sq ) {
	/* This function converts the integer number to string */

	char *str = (char*)malloc(15 * sizeof(char));
	sprintf(str, "%lu", sq);
	return str;

}

void modified_karpekar_number( unsigned long int num ) {

	unsigned long int sq, sq_d, num_d, l, r, ln = 0, rn = 0, i; 

	num_d = num_of_digits( num );
	sq = num*num;
	sq_d = num_of_digits( sq );

	r = num_d;
	l = sq_d - r;

	char *str = int_to_str( sq );

	/* This loop divides the square of number into two parts 
		of length l and r and stores in the ln and rn */
	for( i = 0; i < sq_d; i++ ) {

		/* Making the first string */
		if(l) {
			ln = ln * 10 + str[i] - 48;
			l--;
		}
		/* Making the second string */
		else
			rn = rn * 10 + str[i] - 48;
	}
	
	/* Checking the condition of the the modified karpekar number */
	if( ln + rn == num ) {
		/* Flag is used for INVALID RANGE */
		flag = 1;		
		printf("%lu ",num);
	}

	return;
}

int main(int argc, char const *argv[])
{
	unsigned long int p, q, i;
	printf("Enter the lower integer limit :");
	scanf("%lu",&p);
	printf("Enter the upper integer limit :");
	scanf("%lu",&q);
	for(i = p; i <= q; i++) {
		modified_karpekar_number( i );
	}
	if(!flag)
		printf("INVALID RANGE");
	return 0;
}