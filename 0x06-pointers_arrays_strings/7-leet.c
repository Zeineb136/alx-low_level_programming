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

	char up[] = "AELOT";
	char low[] = "aelot";
	char num[] = "01347";

	i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{

		for (j = 0; low[j] != '\0'; j++)
		{
			if (str[i] == up[j] || str[i] == low[j])
			{
				str[i] = num[j];
				break;
			}
		}
	}
	return (str);
}
