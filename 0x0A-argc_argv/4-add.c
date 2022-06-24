#include "main.h"
#include <stdlib.h>

/**
*main -adds positive numbers.
*
*@argc: number of arguments passed to the function
*@argv:argument vector
*
*Return: always 0.
*/

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 2)
	{
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

