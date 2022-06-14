#include "main.h"

/**
*puts2 - function that prints every other character of a string
*starting with the first character, followed by a new line.
*
*@str:string
*
*Return: string in reverse
*/

void puts2(char *str);
{
	int size = 0;

	int i;

	while (s[size] != '\0')
	{
		size++;
	}


	for (i = 0; i < size; i += 2)
	{
		_putchar (str[i]);
	}
}
