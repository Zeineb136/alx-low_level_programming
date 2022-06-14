#include "main.h"

/**
*puts_half -  function that prints half of a string, followed by a new line.
*
*@str:string
*
*Return: half string.
*/

void puts_half(char *str)
{
	int size = 0;

	int n, i;

	while (str[size] != '\0')
	{
		size++;
	}

	if (size % 2 != 0)
	{
		n = (size - 1) / 2;
	}
	else
	{
		n = size / 2;
	}

	for (i = 0; i < n; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
