#include "main.h"

/**
 * print_line - functn print line
 * @n: input integer
 *
 * Description: a function that draws a straight line in the terminal
 *
 */
void print_line(int n)
{
int una;
if (n <= 0)
_putchar('\n');
{

for (una = 1; una <= n; una++)
_putchar('_');
_putchar('\n');
}
}
