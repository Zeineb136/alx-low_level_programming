#include "main.h"
#include <stdlib.h>
/**
*string_nconcat -function that concatenates two string.
*@s1: string1.
*@s2: string2
*@n: number of bytes
*Return: pointer that contains s1, followed by the first n bytes of s2.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, a = 0;
	char *strnew;

	i = j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n > j)
		n = j;
	a = i + n;
	strnew = malloc(a + 1);

	if (strnew == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		strnew[k] = s1[k];
	for (k = 0; k < j; k++)
		strnew[k + i] = s2[k];
	strnew[i + j] = '\0';
	return (strnew);
}
