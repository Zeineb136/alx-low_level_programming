#include "main.h"

/**
*_strlen -function that returns the length of a string.
*
*@s:string
*
*Return: length of a string.
*/

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}

