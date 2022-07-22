#include "main.h"

/**
*get_endianness - function that checks the endianness.
*
*Return: 0 if big endian, 1 if little endian.
*/
int get_endianness(void)
{
	int x = 1;
	char *y;

	y = (char *)&x;

	if (*y == 1)
		return (1);
	else
		return (0);
}
