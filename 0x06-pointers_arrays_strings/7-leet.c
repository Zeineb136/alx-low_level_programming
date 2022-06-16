#include "main.h"

/**
*leet -function that encodes a string into 1337.
*@str: string
*
*Return: string of number
*
*/

char *leet(char *str)
{
	int i, j;

	char c[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	i = 0;

	while (str[i] != '\0')
	{
	j = 0;

	while (c[j] != '\0')
	{
		if (str[i] == c[j])
		{
			str[i] = num[i];
		}
		j++;
	}
	i++;
	}
	return (str);
}
