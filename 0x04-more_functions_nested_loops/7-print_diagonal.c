#include "main.h"
/**
 * print_diagonal - functn print diagonal line
 * @n: input integer
 *
 * Description: a function that draws a diagonal line on the terminal
 *
 */
void print_diagonal(int n)
{
int i, diag;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (diag = 0; diag < i; diag++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
