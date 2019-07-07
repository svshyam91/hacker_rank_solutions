/*
	Taum and Bday Problem on Hacker Rank
	Problem Link: https://www.hackerrank.com/challenges/taum-and-bday/problem

	Author: Shyam Kumar


*/

#include <stdio.h>

unsigned long int taum_and_bday( unsigned long int b, unsigned long int w,
 								unsigned long int bc, unsigned long int wc, 
 								unsigned long int z 
 								) {

	unsigned long int total_cost;

	/* If the cost of each black gift is less than cost of each 
		white gift */
	if( bc < wc ) {

		/* First, we add total cost of black gift to the total cost */
		total_cost = b * bc;

		/* Check if the conversion cost is less than total cost of white gift
			If it is, then add conversion cost to total cost */
		if( bc+z < wc )
			total_cost += ( bc+z ) * w;
		
		/* If the conversion cost is more than total cost of white gift 
			then add the total cost of white gifts */
		else
			total_cost += ( w*wc ); 
	}

	/* If the cost of each white gift is less than cost of each 
		black gift */
	else if( wc < bc ) {
		total_cost = w * wc;
		if( wc+z < bc )
			total_cost += ( wc+z ) * b;
		else
			total_cost += ( b*bc );
	}

	/* If both the costs are equal */
	else {
		total_cost = w*wc + b*bc;
	}

	return total_cost;
}

int main(int argc, char const *argv[])
{
	unsigned long int w, b, bc, wc, z, cost;
	int i, t;

	printf("\nEnter the number of test cases:");
	scanf("%d",&t);

	for( i = 0; i < t; i++ ) {
		printf("\nEnter the number of black gifts: ");
		scanf("%lu",&b);
		printf("\nEnter the number of white gifts: ");
		scanf("%lu",&w);
		printf("\nEnter the cost of each black gift: ");
		scanf("%lu",&bc);
		printf("\nEnter the cost of each white gift: ");
		scanf("%lu",&wc);
		printf("\nEnter the conversion cost: ");
		scanf("%lu",&z);

		cost = taum_and_bday( b, w, bc, wc, z );
		printf("Cost = %lu",cost);
	}

	return 0;
}