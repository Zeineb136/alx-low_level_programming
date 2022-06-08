#include "main.h"
/**
*jack_bauer-prints every minute of the day.
*
*Return: every minute of the day of Jack Bauer
*/

void jack_bauer(void)
{
	int H;
	int m;

	for (H = 0 ; H <= 23 ; H++)
	{
		for (m = 0 ; m <= 60 ; m++)
		{
			_putchar (H / 10 + '0');
			_putchar (H % 10 + '0');
			_putchar (':');
			_putchar (m / 10 + '0');
			_putchar (m % 10 + '0');
			_putchar ('\n');
		}
	}

}
