#include "main.h"

/**
*print_diagonal -function that draws a straight line in the terminal.
*
*@n: the number of character \ should be printed
*
*Return: line or 0
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < i ; j++)
			{
				_putchar (' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
