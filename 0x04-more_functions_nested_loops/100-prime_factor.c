#include <stdio.h>

/**
*main -prints the largest prime factor of the number.
*
*Return:0.
*/

int main(void)
{
	long n = 612852475143;

	long div = 2;

	long max = 0;

	while (n != 1)
	{
		if (n % div == 0)
		{
			n = n /  div;
			max = div;
		}

		div += 1;
	}
	printf("%ld\n", max);
	return (0);
}
