#include "main.h"
#include <stdio.h>

/**
*print_diagsums -function that prints the sum of the two diagonals
*of a square matrix of integers.
*
*@a:array
*@size: of square
*/

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = sum2 = 0;

	for  (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		a = a + size;
	}
	a = a - size;

	for (j = 0; j < size; j++)
	{
		sum2 = sum2 + a[j];
		a = a - size;
	}
	printf("%d", "%d\n", sum1, sum2);
}

