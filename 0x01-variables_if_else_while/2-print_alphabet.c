#include <stdio.h>
#include <ctype.h>

/**
**main-Entry point
*
**Return: Always 0 (Success)
*/

int main(void)
{

char x;
for (x = 'A'; x <= 'Z'; x++)
{
int lower_x = tolower(x);
putchar (lower_x);

}

putchar ('\n');
return (0);

}
