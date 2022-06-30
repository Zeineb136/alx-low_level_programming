#include "main.h"
#include <stdlib.h>

/**
*argstostr - function that concatenates all the arguments of 
*your program
*
*@ac: number of arguments
*@av: argument vector
*
*Return: no return
*/

char *argstostr(int ac, char **av)
{
	int i, j, a, b;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			a++;
		a++
	}

}
