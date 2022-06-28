#include "main.h"
#include <stdlib.h>

/**
*create_array - function that creates an array of chars,
*and initializes it with a specific char.
*@c: char
*@size: size of the memory to print.
*
*Return: a pointer of array or 0.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == '\0')
		return ('\0');

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

