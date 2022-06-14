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

	int i;

	while (s[i] != '\0')
	{
		size++;
	}
	
	for(i=size-1; i>=0; i--)
		_putchar (s[i]);

	_putchar ('\n');
}
