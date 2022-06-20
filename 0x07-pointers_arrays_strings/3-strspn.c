#include "main.h"

/**
*_strspn -function that gets the length of a prefix substring.
*
*@s: string
*@accept: substring
*
*Return: the length of a prefix substring
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	int maxi = 0;

	for  (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				maxi++;

			if (s[i] == ' ')
				break;

		}
	}

	return (maxi);
}

