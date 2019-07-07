// Encryption

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void encryption( char *str ) {

	int len = strlen(str), len2 = 0, i, j, k, rows, cols;
	
	/* Finding the length of the string without spaces */
	for( i = 0; i < len; i++ ) {
		if( str[i] != ' ' && str[i] != '\n')
			len2++;
	}

	rows = floor(sqrt(len2));
	cols = ceil(sqrt(len2));

	/* If (rows * cols) is less than length of the string */
	if( (rows * cols) < len2 )
		rows++;

	/* Declaring 2D array for storing the string */
	int **arr = (int**)malloc( rows * sizeof(int*));
	for(i = 0; i < rows; i++) 
		arr[i] = (int*)malloc( cols * sizeof(int));


	/* Filling the 2D array */
	k = 0;
	for( i = 0; i < rows; i++ ) {
		for( j = 0; j < cols; j++ ) {

			/* Ignoring spaces and newline */
			if( str[k] != ' ' && str[k] != '\n')	
				arr[i][j] = str[k];
			else
				arr[i][j] = str[++k];
			k++;
		}
	}

	/* Printing the encrypted array */
	for( i = 0; i < cols; i++ ) {
		for( j = 0; j < rows; j++ ) {
			if( arr[j][i] >= 97 && arr[j][i] <= 122 )
				printf("%c", arr[j][i]);
		}
		printf(" ");
	}
	return;
}

int main(int argc, char const *argv[])
{
	char *str = (char*)malloc( 85 * sizeof( char ));
	printf("Enter the string:");
	fgets(str, 85, stdin);
	encryption(  str );
	return 0;
}