#include "main.h"

/**
*_strchr -function that locates a character in a string.
*
*@c: character
*@s: string
*
*Return:the 1 occurrence of the character c in s or 0 if not found
*/

char *_strchr(char *s, char c)
{
	int size, i;

	size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	for  (i = 0; i <= size; i++)
	{
		if (s[i] == c)
		{
			_putchar (i + '0');
		}
		else
		{
			_putchar (0 + '0');
		}
	}
}

