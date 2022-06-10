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
	int start = 1;

	while (start <= n)
	{
		_putchar (95);
	}
	_putchar ('\n');
}
