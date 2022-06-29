#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - function that returns a pointer to a 2 dimensional
*array of integers.
*
*@width: with of the array
*@height: height of the array
*
*Return: a pointer to a 2 dimensional array of integers.
*/

int **alloc_grid(int width, int height)
{
	int i, j, **p;

	if (width <= 0 || height <= 0)
		return ('\0');

	p = malloc(sizeof(int) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p == NULL)
		{
			free(p);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}

