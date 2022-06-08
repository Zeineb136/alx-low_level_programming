#include "main.h"
/**
*times_table -function that prints the 9 times table, starting with 0.
*
*Return: the 9 times table.
*/

void times_table(void)
{
	int num1, num2, mult;

	for (num1 = 0 ; num1 <= 9 ; num1++)
	{
		_putchar('0');

		for (num2 = 1 ; num2 <= 9 ; num2++)
		{
			_putchar (',');
			_putchar (' ');

			mult = num1 * num2;

			if (mult <= 9)
				_putchar (' ');
			else
				_putchar (mult / 10 + '0');
			_putchar (mult  % 10 + '0');
		}
		_putchar ('\n');
	}

}
