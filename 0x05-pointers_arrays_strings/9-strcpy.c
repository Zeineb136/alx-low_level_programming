#include "main.h"
#include <stdio.h>

/**
*_strcpy -function that copies the string pointed to by src
*including the terminating null byte (\0)
*to the buffer pointed to by dest
*
*@dest: string destination
*@src: string to be copied
*
*Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int size = 0;

	int i;

	while (scr[n] != '\0')
	{
		size++;
	}

	for (i = 0; i <= size; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
