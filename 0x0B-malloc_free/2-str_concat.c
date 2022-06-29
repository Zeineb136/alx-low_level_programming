#include "main.h"
#include <stdlib.h>

/**
*str_concat -function that concatenates two string.
*@s1: string1.
*@s2: string2
*
*Return: string or 0.
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, a = 0;

	char *str2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	str2 = (char *) malloc(sizeof(char) * i + j + 1);

	if (str2 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a <= i; a++)
		{
			str2[a] = s1[a];
		}
		for (a = 0; a <= j; a++)
		{
			str2[a + i] = s2[a];
		}
	}
	return (str2);
}

