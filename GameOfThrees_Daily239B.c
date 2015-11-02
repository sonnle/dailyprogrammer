/*
 * GameOfThrees.c
 *
 *  Created on: Nov 2, 2015
 *      Author: sle
 */

#include <stdio.h>

void nextMove(int* x)
{
	int remainder = *x % 3;
	switch(remainder)
	{
		case 0:
			*x /= 3;
			printf("Divided by 3: %d\n", *x);
			break;
		case 1:
			*x -= 1;
			printf("Subtracted by 1: %d\n", *x);
			break;
		case 2:
			*x += 1;
			printf("Added by 1: %d\n", *x);
			break;
	}
}

int main(int argc, char* argv[])
{
	if(argc != 2)
	{
		fprintf(stderr, "Error: Need starting number");
		exit(0);
	}

	int start = atoi(argv[1]);
	printf("Starting number is: %d\n", start);

	while(start != 1)
	{
		nextMove(&start);
	}

	return 0;
}
