#include "main.h"

/**
*print_rev -function that prints a string, in reverse, followed by a new line.
*
*@s:string to print
*
*Return: string in reverse
*/

void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar (*s--);
	}
	_putchar ('\n');
}
