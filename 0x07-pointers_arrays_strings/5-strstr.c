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

	for  (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[j] == '\0')
		{
			return (haystack);
		}
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
				break;

			if (needle[i + j] == '\0')
				return (haystack + i);
		}
	}

	return ('\0');
}

