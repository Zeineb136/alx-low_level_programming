#include "main.h"


/**
*print_number - function that prints an integer.
*
*@n: number
*
*Return: integer.
*/

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		i = -i;
	}

	 if (i > 10)
	{
		print_number(i / 10 + '0');
	}
	_putchar(i % 10 + '0');
}
