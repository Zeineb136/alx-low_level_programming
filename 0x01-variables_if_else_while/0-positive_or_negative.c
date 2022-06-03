#include <stdlib.h>

#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)

{

		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */


scanf("%lf", &n);

if (n <= 0.0)
{

if (n == 0.0)
	printf("%lf, is zero", n);
else
	printf("%lf, is negative.", n);

}

else
printf("%lf, is positive.", n);

	return (0);

}
