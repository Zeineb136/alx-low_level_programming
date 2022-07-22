#include "main.h"

/**
*flip_bits -  function that returns the number of bits
*you would need to flip to get from one number to another.
*@n: number one.
*@m: number two.
*
*Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int t1, t2, count_bit = 0;

	while (n > 0 || m > 0)
	{
		t1 = (n & 1);
		t2 = (m & 1);

		if (t1 != t2)
		{
			count_bit++;
		}
	n >>= 1;
	m >>= 1;
	}
	return (count_bit);
}
