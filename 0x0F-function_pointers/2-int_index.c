#include <stdio.h>
#include "function_pointers.h"

/**
*int_index - function that searches for an integer.
*@array: array
*@size: the number of elements in the array
*@cmp: a pointer to the function.
*
*Return: nothing.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < (int)size; i++)
			if (cmp(array[i]) != 0)
				return (i);
		return (-1);
	}
}
