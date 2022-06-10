#include "main.h"

/**
*print_triangle -function that prints a triangle.
*
*@size: size of the triangle
*
*Return: triangle or new line
*/

void print_triangle(int size)
{
	int i, j, m;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = size - 1; j > i ; j--)
			{
				_putchar(' ');
			}

			for (m = 0; m < i + 1 ; m++)
				{
					_putchar (35);
				}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
