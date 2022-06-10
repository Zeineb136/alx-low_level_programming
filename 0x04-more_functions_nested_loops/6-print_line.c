#include "main.h"

/**
*print_line -function that draws a straight line in the terminal.
*
*@n: the number of character _ should be printed
*
*Return: line or 0
*/

void print_line(int n)
{
	char symb = '_';
	int n, i;

	if (n >= 0)
	{
	for (i = 0; i >= n; i++)
	{
		_putchar (symb);
	}
	_putchar ('\n');
	}
	else
	{
		_putchar ('\n');
	}
}
