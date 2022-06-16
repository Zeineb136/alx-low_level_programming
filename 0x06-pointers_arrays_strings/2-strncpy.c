#include "main.h"

/**
*_strncpy -function that copies a string.
*
*@dest: string1
*@src: string2
*@n: largest number of bytes to append.
*
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n);
{
	int i

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
