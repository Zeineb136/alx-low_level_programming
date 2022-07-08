#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_numbers- function that prints number,
*followed by a new line.
*@separator: the string to be printed between numbers.
*@n: number of integers.
*
*Return: void.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_ptr;

	unsigned int i;

	va_start(num_ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num_ptr, int));

		if (separator && i != (n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num_ptr);
}
