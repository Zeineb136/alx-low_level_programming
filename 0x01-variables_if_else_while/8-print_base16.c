#include <stdio.h>
#include <ctype.h>

/**
**main-Entry point
*
**Return: Always 0 (Success)
*/

int main(void)
{

int num;

for (num = 0 ; num < 10 ; num++)
{
putchar (num + '0');
}

char x;
for (x = 'a'; x <= 'f'; x++)
{
putchar (x);
}


putchar ('\n');
return (0);

}
