#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_all- function that prints anything
*@format: list of arg types
*
*Return: 0.
*/
void print_all(const char * const format, ...)
{
	va_list argument;

	char *str = NULL;

	unsigned int i;


	va_start(argument, format);

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
