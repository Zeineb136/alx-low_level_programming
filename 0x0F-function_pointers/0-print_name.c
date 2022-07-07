#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_name- function that prints a name.
*@name: name of the person
*@f: function
*
*Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
