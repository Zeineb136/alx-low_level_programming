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
		int max_i = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i + j] == accept[j])
				max_i++;

			if (s[i + j] != accept[j])
				if (max_i > maxi)
					maxi = max_i;
		}
	}

	return (maxi);
}

