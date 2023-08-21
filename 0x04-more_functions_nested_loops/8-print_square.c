#include "main.h"
/**
 * print_square - functn prints a square
 * @size: input integer
 *
 * Description: a function that prints a square, followed by a new line
 *
 */
void print_square(int size)
{
int i, ja;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (ja = 0; ja < size; ja++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
