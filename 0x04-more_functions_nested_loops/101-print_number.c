#include "main.h"
/**
 * print_number - functn prints an integer
 * @n: input integer
 *
 * Description: a function that prints an integer
 *
 */
void print_number(int n)
{
int sa = 1;
if (n < 0)
{
{
_putchar('-');
}
while (-1 * ((n / sa)) >= 10)
	{
sa *= 10;
}
while (sa > 0)
{
_putchar(-1 * ((n / sa) % 10) + '0');
sa /= 10;
}
}
else
{
while ((n / sa) >= 10)
{
sa *= 10;
}
while (sa > 0)
{
_putchar((n / sa) % 10 + '0');
sa /= 10;
}
}
}
