#include "main.h"

/**
*more_numbers -function that prints 10 times the numbers, from 0 to 14
*
*Return: 10 times numbers
*/

void more_numbers(void)
{
	int num, i;

	for (i = 0; i <= 9; i++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
				_putchar(num / 10 + '0');
			_putchar (num % 10 + '0');
		}
	}
	_putchar('\n');
}
