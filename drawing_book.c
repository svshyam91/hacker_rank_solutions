/* 
	Drawing Book Problem on HackerRank
	Problem Link: https://www.hackerrank.com/challenges/drawing-book/problem

	Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

void drawing_book( int n, int p ){

	int pages_from_back, pages_from_front, a=n;
	/* We are using AP formula for finding the total numbers of terms till p
		l = a+(n-1)d */
	//From Front (d=2)
	if(p%2 != 0)
		p=p-1;

	pages_from_front=1+(p-2)/2;

	if(n%2 != 0)
		a=n-1;

	// From Back (d=-2)
	pages_from_back=1+(p-a)/(-2);
	pages_from_back-=1;

	if(pages_from_front < pages_from_back)
		printf("%d",pages_from_front);
	else
		printf("%d",pages_from_back);
}

int main(int argc, char const *argv[])
{

	int n,p,ans;
	scanf("%d",&n);
	scanf("%d",&p);
	drawing_book(n,p);
	return 0;
}