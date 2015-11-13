/*
 * StandardDeviation.c
 *
 *  Created on: Aug 27, 2015
 *      Author: sle
 */

#include<stdio.h>
#include<math.h>

static int numArray1[] = {5, 6, 11, 13, 19, 20, 25, 26, 28, 37};
int* pNumArray1 = numArray1;

static int numArray2[] = {37, 81, 86, 91, 97, 108, 109, 112, 112, 114, 115, 117, 121, 123, 141};
int* pNumArray2 = numArray2;

static int numArray3[] = {266, 344, 375, 399, 409, 433, 436, 440, 449, 476, 502, 504, 530, 584, 587};
int* pNumArray3 = numArray3;

double calcStdDev(int *pNumArray, int length);

int main()
{
	printf("1 stdDev: %f\n", calcStdDev(pNumArray1, sizeof(numArray1) / sizeof(numArray1[0])));
	printf("2 stdDev: %f\n", calcStdDev(pNumArray2, sizeof(numArray2) / sizeof(numArray2[0])));
	printf("3 stdDev: %f\n", calcStdDev(pNumArray3, sizeof(numArray2) / sizeof(numArray2[0])));
}

double calcStdDev(int *pNumArray, int length)
{
	int total = 0;
	double diffSq = 0;
	for(int i = 0; i < length; i++, pNumArray++)
	{
		total += *pNumArray;
	}
	double average = (double)total / length;
	for(int i = 0; i < length; i++)
	{
		double current = *--pNumArray;
		diffSq += ((current - average) * (current - average));
	}
	double variance = diffSq / length;
	return sqrtf(variance);
}
