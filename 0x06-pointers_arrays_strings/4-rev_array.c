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
	int i, temp;

	n--;

	for (i = 0; i < n; i++; n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
