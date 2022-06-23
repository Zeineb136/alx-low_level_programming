#include "main.h"

/**
*_sqrt_recursion- function that returns the natural square root of a number.
*
*@n:number
*
*Return: square root of number.
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (sqr_num(n, 1));
}

/**
*sqr_num -fonction that find the square root of a number
*@N: number
*@i:counter variable
*
*Return: square root of a number.
*/

int sqr_num(int N, int i)
{
	if (N == (i * i))
		return (i);
	else if (N > (i * i))
		return (sqr_num(N, i + 1));
	else
		return (-1);
}

