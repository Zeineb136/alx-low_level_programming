#include "main.h"
#include <stdlib.h>

/**
*malloc_checked - function that allocates memory using malloc
*@b: integer
*
*Return: a pointer to the allocated memory.
*/

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

