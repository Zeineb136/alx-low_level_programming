#include "main.h"

/**
*_strcmp -function that compares two strings.
*
*@s1: string1
*@s2: string2
*
*Return: 0 if equal or D if different
*/

int _strcmp(char *s1, char *s2)
{
	int i, D;

	i = D = 0;

	while (s1[i] != '\0' && D == 0)
	{
		D = s1[i] - s2[i];
		i++;
	}
	return (D);
}
