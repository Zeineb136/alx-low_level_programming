#include "main.h"

/**
*_strcat -function that concatenates two strings.
*
*@dest: string1
*@src: string2
*@n: largest number of bytes to append.
*
*Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (dest[i] != 0)
	{
		i++;
	}
	while ((src[j] != 0) && (j < n))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
