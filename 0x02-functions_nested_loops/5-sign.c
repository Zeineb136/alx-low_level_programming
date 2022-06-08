#include "main.h"
/**
*print_sign -function that prints the sign of a number.
*
*@n:intput number
*
*Return: 1 & prints(+) if (n>0), 0 & prints(-) if (n=0) else -1 & prints(-).
*/

int print_sign(int n)
{
	if (n > 0)
	{
		putchar ('+');
		putchar ('\n');
		return (1);
	}

	else if (n == 0)
	{
		putchar ('0');
		putchar ('\n');
		return (0);
	}

	else
	{
		putchar ('-');
		putchar ('\n');
		return (-1);
	}

	return (0);
}
