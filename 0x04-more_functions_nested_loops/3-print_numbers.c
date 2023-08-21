#include "main.h"
/**
*print_numbers - from 0to 9 followed by anew line
*
*Return: Always 0 (success)
*/

void print_numbers(void)
{
int sum;
for (sum = 0; sum <= 9; sum++)
_putchar(sum + '0');
_putchar('\n');
}

