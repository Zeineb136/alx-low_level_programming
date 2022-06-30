#include "main.h"
#include <stdlib.h>

/**
*array_range - function that creates an array of integers.
*@min: min number
*@max: max number
*
*Return: a pointer to the newly created array.
*/

int *array_range(int min, int max)
{
	void *arrNew;
	int i, size = 0;

	if (min > max)
		return (NULL);

	while (size < (max - min)
			size++;
	arrNew = malloc(sizeof(int) * (size + 1);
	if (arrNew == NULL)
		return (NULL);

	for (i = 0; min <= max; min++; i++)
		arrNew[i] = min;

	return (arrNew);
}

