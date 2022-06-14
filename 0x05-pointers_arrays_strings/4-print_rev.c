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
	int size = 0;
	while (*s != '\0')
	{
		size++;
	}
	int i;
	for(i=size; i>=0; i--)
		_putchar (s[i]);

	_putchar ('\n');
}
