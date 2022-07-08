#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_strings- function that prints string
*followed by a new line.
*@separator: the string to be printed between numbers.
*@n: number of strings passed to the function
*
*Return: void.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;

	char *str = NULL;

	unsigned int i;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			str = "(nil)";
			printf("%s", str);
		}
		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(string);
}
