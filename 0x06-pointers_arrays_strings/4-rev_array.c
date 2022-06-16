#include "main.h"

/**
*reverse_array -function that reverses the content of an array of integers.
*
*@a: an array of integers.
*@n: number of elements of an array.
*
*/

void reverse_array(int *a, int n)
{
	int i = 0;

	int tmp[n];

	for (i < n, i++)
	{
		tmp[n - 1 - i] = a[i];
	}
	for (i < n; i++)
	{
		a[i] = tmp[i];
	}
}
