#include "main.h"
/**
*print_last_digit -function that prints the last digit of a number.
*
*@n :number
*
*Return: the last digit of a number.
*/

int print_last_digit(int n)
{
	if (n>0)
	{	
		n = n % 10;
		_putchar (n + '0');
		
	}
	else 
	{
		n = n % 10 * -1;
		_putchar (n + '0');
		
	}
}
