/* 
	Append and Delete Problem on HackerRank
	Problem Link: https://www.hackerrank.com/challenges/append-and-delete/problem

	Author: Shyam Kumar

*/

// Incomplete

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void append_and_delete(char *str1, char *str2, int n) {
	int len1=strlen(str1);
	int len2=strlen(str2);
	int num_match_ch = 0, i=0;
	while( str1[i] != '\0' && str2[i] != '\0' ) {
		
	}


	return;
}

int main(int argc, char const *argv[])
{
	char str1[100], str2[100];
	int n;
	scanf("%s ",str1);
	scanf("%s",str2);
	scanf("%d",&n);	

	append_and_delete(str1, str2, n);
	return 0;
}