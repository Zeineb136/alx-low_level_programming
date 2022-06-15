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
	int i = 0;
	int result = 0;
	int puiss = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			puiss = puiss * -1;
		i++;
	}
	while ((s[i] >= '0') && (*s <= '9') && s[i] != 0)
	{
		if (result >= 0)
		{
			result = result * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			result = result * 10 - (s[i] - '0');
			i++;
		}
	}
	puiss = puiss * -1;
	return (result * puiss);
}
