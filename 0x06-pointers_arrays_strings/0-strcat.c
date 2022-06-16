#include "main.h"

/**
*_strcat-function that concatenates two strings.
*
*@dest: string1
*@src: string2
*
*Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (dest[i] != '0')
	{
		i++;
	}
	while (src[j] != '0')
	{
		dest[i] = src[j]
		i++;
		j++;
	}
	return (dest);
}
