#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
** main-Entry point
*
** Return: Always 0 (Success)
*/
 
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
  
  scanf("%d", &n);

if (n <= 5.0)
{

if (n == 0.0)
	printf("Last digit of %d is the string and is 0\n", n);
else
	printf(Last digit of "%d is the string and is less than 6 and not 0\n", n);

}

else
printf("Last digit of %d is the string and is greater than 5\n", n);

	return (0);
}
