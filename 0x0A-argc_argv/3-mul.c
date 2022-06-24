#include "main.h"
#include <stdlib.h>

/**
*main -prints all arguments
*
*@argc: number of arguments passed to the function
*@argv:argument vector
*
*Return: always 0.
*/

int main(int argc, char *argv[])
{
	int m;

	if (argc == 3)
	{
		m = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

