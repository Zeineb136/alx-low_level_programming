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
		putchar (r + '+');
		return (1);
		putchar ('\n');
	}

	else if (n == 0)
	{
		putchar (r + '0');
		return (0);
		putchar ('\n');
	}

	else
	{
		putchar (r + '-');
		return (-1);
		putchar ('\n');
	}
}
