#include <main.h>
/**
*main - check the code
*
*print_alphabet: prints the alphabet, in lowercase, followed by a new line.
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

int main(void)
{
	print_alphabet();
	return (0);

}
