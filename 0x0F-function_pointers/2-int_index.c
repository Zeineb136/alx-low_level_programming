#include <stdio.h>
#include "function_pointers.h"

/**
*int_index - function that searches for an integer.
*@array: array
*@size: the number of elements in the array
*@cmp: a pointer to the function.
*
*Return: .
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size >0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
}
