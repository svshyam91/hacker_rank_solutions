// Library Fine

#include <stdio.h>

int library_fine( int d1, int m1, int y1, int d2, int m2, int y2 ) {

	int fine = 0;
	/* When return year is same as due date */
	if( y1 == y2 ) {

		/* When return month is same as due date */
		if( m1 == m2 ) {

			/* When return date is same as due date */
			if( d1 <= d2 ) 
				fine = 0;
			else 
				fine = (d1 - d2) * 15;
		}
		else if( m1 < m2 )
			fine = 0;
		else
			fine = (m1 - m2 ) * 500;
	}
	else if( y1 < y2 )
		fine = 0;
	else
		fine = 10000;
	return fine;
}

int main(int argc, char const *argv[])
{

	int d1, m1, y1, d2, m2, y2, fine;
	printf("Enter the return date as (d m y):");
	scanf("%d %d %d",&d1, &m1, &y1);
	printf("Enter the due date as (d m y):");
	scanf("%d %d %d",&d2, &m2, &y2);
	fine = library_fine( d1, m1, y1, d2, m2, y2 );
	printf("The library fine is: %d",fine);
	return 0;

}