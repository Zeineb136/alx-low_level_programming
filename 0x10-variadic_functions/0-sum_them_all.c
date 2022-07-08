#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all- function that returns the
*sum of all its parameters.
*@n: number of parameters.
*
*Return: sum of parameters or 0.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list sum_p;

	unsigned int i, sum = 0;

	if (n)
	{
	va_start(sum_p, n);

	for (i = 0; i < n; i++)
		sum += va_arg(sum_p, int);
	va_end(sum_p);
	}
	return (sum);
}
