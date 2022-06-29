#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - function that returns a pointer to a 2 dimensional array of integers.
*
*@width: with of the array
*@height: height of the array
*
*Return: a pointer to a 2 dimensional array of integers.
*/

int **alloc_grid(int width, int height)
{
	char *pointer;
	int i , j;

	if (width <= 0 || height <= 0)
		return ('\0');

	pointer = malloc(sizeof(char) * width * height);



	return (pointer);
}

