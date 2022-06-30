#include "main.h"
#include <stdlib.h>

/**
*_calloc - function that allocates memory using malloc
*@nmemb: number of elements
*@size: size of bytes
*Return: a pointer to the allocated memory or NULL.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = malloc(nmemb * size);
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}

