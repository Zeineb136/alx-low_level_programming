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
	int i, j, sum = 0;

	if (argc < 1)
	{
		return (0);
	}


	for (i = 1; i < argc; i++)
	{
		for (j = 0; arg[i][j] != '\0'; j++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);

	return (0);
}

