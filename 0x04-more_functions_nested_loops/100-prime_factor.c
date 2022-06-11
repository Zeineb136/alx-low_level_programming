#include <stdio.h>

/**
*main -prints the largest prime factor of the number.
*
*Return :largest prime factor.
*/

int main(void)
{
	long n = 612852475143;

	long div = 2;

	long LPfactor = 0;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div = div + 1;
		}
		else
		{
		LPfactor = n
		n = n / div;
		if (n == 1)
			{
			printf("%d\n", PLfactor);
			i = 1;
			break;
			}
		}
	}
