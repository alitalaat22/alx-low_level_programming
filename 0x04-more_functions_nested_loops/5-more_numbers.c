#include "main.h"

/**
*more_numbers - prints 10
*
*Descriptions: prints 10 times the numbers.from 0to14
*
*Return: Always 0 (success)
*/

void more_numbers(void)
{
int sum, good;
int tot;
for (tot = 1; tot <= 10; tot++)
{
for (sum = 0; sum <= 14; sum++)
{
good = sum;
if (sum > 9)
{
_putchar(1 + 48);
good = sum % 10;
}
_putchar(good + 48);
}
_putchar('\n');
}
}
