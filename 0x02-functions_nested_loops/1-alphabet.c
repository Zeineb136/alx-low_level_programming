#include "main.h"
/**
*print_alphabet -prints the alphabet lowercas.
*
*Return: Always 0.
*/


void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}





