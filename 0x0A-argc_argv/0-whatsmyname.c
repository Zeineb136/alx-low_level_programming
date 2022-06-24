#include "main.h"
#include <stdio.h>

/**
*main -prints the number of arguments 
*
*@argc: number of arguments passed to the function
*@argv:argument vector
*
*Return: always 0.
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", *argv);
	return 0;
}

