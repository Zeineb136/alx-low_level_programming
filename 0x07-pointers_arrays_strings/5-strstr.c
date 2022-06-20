#include "main.h"

/**
*_strstr -function that locates a substring.
*
*@haystack: string
*@needle: substring
*
*Return: the beginning of the located substring or 0 if not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for  (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}

	return ('\0');
}

