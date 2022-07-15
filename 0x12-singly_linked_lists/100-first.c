#include <stdio.h>

void first_print (void) __attribute__ ((constructor));
/**
*first_print - function that prints string before the main function is executed
*
*Return: void.
*/
void first_print (void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
