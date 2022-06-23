#include "main.h"

/**
*is_prime_number - function that returns 1 if the input integer
*is a prime number, otherwise return 0.
*
*@n:number
*
*Return: 1 or 0.
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_founder(n, 2));
}

/**
*prime_founder -fonction that find prime number
*@num: number
*@i:counter variable
*
*Return: return 1 if num is prime number otherwise 0.
*/

int prime_founder(int num, int i)
{
	if (num == i)
		return (1);
	else if (num % i == 0)
		return (0);
	else
		return (prime_founder(num, i + 1));
}

