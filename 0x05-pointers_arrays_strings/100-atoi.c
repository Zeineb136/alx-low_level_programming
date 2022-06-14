#include "main.h"
#include <stdio.h>

/**
*_atoi -function that convert a string to an integer
*
*@s: string to be converted to an integer
*
*Return: integer
*/

int _atoi(char *s)
{
	int a, b;

	a = 0;
	b = 1;

	while (('-' == (*s)) || ((*s) == '+'))
	{
		if (*s == '-')
			b = b * -1;
		s++;
	}
	while ((*s >= '0') && (*s <= '9'))
	{
		a = (a * 10) + ((*s) - '0');
		s++;
	}
	return (a * b);
}
