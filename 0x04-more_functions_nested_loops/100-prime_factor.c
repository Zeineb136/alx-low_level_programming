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

	long LPfactor = 0;

	while (n != 1)
	{
		if (n % div == 0)
		{
			n = n : div;
			LPfactor = div;
		}

		div += 1;
	}
	printf("%d\n", PLfactor);
	return (0);
}
