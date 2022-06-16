#include "main.h"

/**
*cap_string -function that capitalizes all words of a string.
*@str: string
*
*Return: string with all words capitalized.
*
*/

char *cap_string(char *str)
{
	int i, j;

	char c[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;

	while (str[i] != '\0')
	{

	if (i == 0 && str[i] >= 97 && str[i] <= 122)
	{
		str[i] = str[i] - 32;
	}
	j = 0;
	while (c[j] != '0')
	{
	if (c[j] == str[i] && (str[i + 1] >= 97 && str[i + 1] <= 122))
	{
		str[i + 1] = str[i + 1] - 32;
	}
	j++;
	}
	i++;

	}
	return (str);
}
