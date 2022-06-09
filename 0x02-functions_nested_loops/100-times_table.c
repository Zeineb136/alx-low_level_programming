#include "main.h"
/**
*print_times_table -function that prints the 9 times table, starting with 0.
*
*@n: number
*
*Return: n times table.
*/

void print_times_table(int n)
{
	int num1, num2, mult;
	if ( n >= 0 && n <= 15)
		
	for (num1 = 0 ; num1 <= n ; num1++)
	{
		_putchar('0');

		for (num2 = 1 ; num2 <= n ; num2++)
		{
			_putchar (',');
			_putchar (' ');

			mult = num1 * num2;

			
		}
		_putchar ('\n');
	}

}
