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
		n = n % 10
		putchar ( n + '0' );
		putchar ('\n');
	}
}
