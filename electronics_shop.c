/* 
    Electronics Shop Problem on HackerRank
    Problem Link: https://www.hackerrank.com/challenges/electronics-shop/problem

    Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

void electronics_shop(unsigned long int b, int n, int m, unsigned long int *keyboards, unsigned long int *devices) {
	int i, j;
	unsigned long int total_cost, spend_money=0;
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			total_cost=keyboards[i]+devices[j];
			if(total_cost < b && total_cost > spend_money)
				spend_money=total_cost;
		}
	}
	if(spend_money == 0)
		spend_money=-1;
	printf("Spend Money=%ld",spend_money);
}

int main(int argc, char const *argv[])
{
	int n, m, i;
	unsigned long int b;
	scanf("%ld %d %d",&b,&n,&m);
	unsigned long int keyboards[n], devices[m];
	for(i=0; i<n; i++) 
		scanf("%ld",&keyboards[i]);
	for(i=0; i<m; i++)
		scanf("%ld",&devices[i]);
	electronics_shop(b, n, m, keyboards, devices);
	return 0;
}