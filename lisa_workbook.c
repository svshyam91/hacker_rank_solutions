// Lisa's Workbook

#include <stdio.h>
#include <stdlib.h>

int parse_pages( int start_page, int end_page, int probs, int k ) {

	/* This function works on each chapter and returns the number of
		special problems in that chapter. */

	int full_pages, f_prob = 1, l_prob, i, count = 0;

	/* Total no. of pages with k problems per page*/
	full_pages = probs / k;		

	/* This loop checks all full_pages for special problems */
	for( i = start_page; full_pages && i <= end_page; i++ ) {

		l_prob = f_prob + k -1;			// Last problem number on page
		/* This condition checks if the page number comes in range of 
		problems on this page */
		if( i >= f_prob && i <= l_prob ) 
			count++;

		f_prob = l_prob + 1;		// First problem of next page

		full_pages--;
	}

	/* Checking last page for special problem(s)*/
	l_prob = f_prob + ( probs % k ) - 1;
	if( i >= f_prob && i <= l_prob ) 
		count++;

	return count;
}

int lisa_workbook( int n, int k, int *arr ) {

	/* This function finds and sends information to other function
		regarding each chapter like starting, ending page of that chapter and
		total number of problems in that chapter. */

	int start_page = 1, end_page, page_count, i, count = 0;

	/* This loop finds the first page and end page of every chapter */
	for( i = 0; i < n; i++ ) {

		page_count = arr[i] / k;	// Total full pages
		if( arr[i] % k > 0 )		// For last page
			page_count++;
		end_page = start_page + page_count - 1;		
		count += parse_pages( start_page, end_page, arr[i], k );
		start_page = end_page + 1;		// Start page of next chapter
	}
	return count;
}

int main(int argc, char const *argv[]) {
	int n, k, i, count = 0;

	printf("Enter the total number of chapters(n): ");
	scanf("%d",&n);
	printf("Max. problems per page(k): ");
	scanf("%d",&k);

	int *arr = (int*)malloc( n * sizeof(int) );
	printf("Enter the array of problems per chapter:");
	for( i = 0; i < n; i++ ) 
		scanf("%d",&arr[i]);

	count = lisa_workbook( n ,k, arr );

	printf("The number of special problems are: %d",count);

	return 0;
}