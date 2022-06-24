#include "main.h"
#include <stdio.h>

/**
*main -prints the number of argument
*
*@argc: number of arguments passed to the function
*@argv:argument vector
*
*Return: always 0.
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", *argv[i]);
	}
	printf("\n");
	return (0);
}

