#include "main.h"
#include <stdlib.h>

/**
*_strdup -function that returns a pointer to a newly allocated space
*in memory,which contains a copy of the string given as a parameter.
*@str: string.
*
*Return: string or 0.
*/

char *_strdup(char *str)
{
	unsigned int i, j;

	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}

	str2 = malloc(sizeof(char) * i + 1);

	if (str2 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j <= i; j++)
		{
			str2[j] = str[j];
		}
	}
	return (str2);
}

