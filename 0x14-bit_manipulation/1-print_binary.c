#include "main.h"

/**
*print_binary -function that prints the binary representation of a number.
*@n: number
*
*Return: binary representation of a number.
*/

void print_binary(unsigned long int n)
{
	int number_bin;

	if (n > 1)
		print_binary(n >> 1);

	number_bin = (n & 1) + '0';
	putchar (number_bin);
}
