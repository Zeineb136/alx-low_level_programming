#include "main.h"

/**
*is_palindrome - function that returns 1 if a string
*is a palindrome and 0 if not.
*
*@s:string.
*
*Return: 1 or 0.
*/

int is_palindrome(char *s)
{
	int L = length(s);

	return (match(s, s + L - 1));
}

/**
*length - length of the string
*@s: string
*
*Return: length of s.
*/

int length(char *s)
{
	if (*s != '\0')
		return (1 + length(s + 1));
	return (0);
}

/**
*match - checks matching characters.
*@a:pointer placement from the beginning
*@z:pointer placement from the end
*
*Return: return 1 if num is prime number otherwise 0.
*/

int match(char *a, char *z)
{
	if (a > z)
		return (1);
	else if (*a != *b)
		return (0);
	return (match(a + 1, b - 1));
}

