#include "main.h"

/**
*binary_to_uint -function that converts a binary number to an unsigned int
*@b:pointing to a string of 0 and 1 chars
*
*Return:the converted number, or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		number <<= 1;
		number += b[i] - '0';
		i++;
	}
	return (number);
}
