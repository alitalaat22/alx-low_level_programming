#include "main.h"
/**
 * print_triangle - triangle
 * @size: input integer
 *
 * Description: a function that prints a triangle, followed by a new line
 *
 */
void print_triangle(int size)
{
int i, j, k;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (k = size - 1; k > i; k--)
{
_putchar(' ');
}
for (j = 0; j <= i; j++)
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
