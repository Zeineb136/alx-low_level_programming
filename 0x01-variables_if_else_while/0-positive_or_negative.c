#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
** main-Entry point
*
** Return: Always 0 (Success)
*/

int main(void)

{

		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */


scanf("%d", &n);

if (n <= 0.0)
{

if (n == 0.0)
	printf("%d is zero\n", n);
else
	printf("%d is negative\n", n);

}

else
printf("%d is positive\n", n);

	return (0);

}
