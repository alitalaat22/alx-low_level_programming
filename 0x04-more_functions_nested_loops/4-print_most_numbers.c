#include "main.h"

/**
 *print_most_numbers - prints the numbers, from 0 to 9
 *
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
int sum;
for (sum = 0; sum <= 9; sum++)
if (sum != 2 && sum != 4)
_putchar (sum + '0');

_putchar ('\n');

}
