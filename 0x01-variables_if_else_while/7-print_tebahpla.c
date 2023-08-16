#include <stdio.h>

/**
*main - entry point
*
*description: print a -a in reverse
*
*Return: Always 0 (seccess)
*/
int main(void)
{
	char real = 'z';
while (real >= 'a')
{
	putchar(real);
	real--;
}
putchar('\n');

return (0);
}
