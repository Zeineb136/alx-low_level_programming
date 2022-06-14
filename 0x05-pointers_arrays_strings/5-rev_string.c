#include "main.h"

/**
*rev_string -function that reverses a string.
*
*@s:string to be reversed
*
*Return: string in reverse
*/

void rev_string(char *s)
{
	int size = 0;

	int i;

	char temp;

	while (s[size] != '\0')
	{
		size++;
	}

	size--;

	for (i = 0; i <= size; i++, size--)
	{
		temp = s[i];
		s[i] = s[size];
		s[size] = temps;
	}
}
