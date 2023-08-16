#include <stdio.h>
/**
*main - Entry point
*
* description prints all possible different combinations of two digits.
*
*Return Always 0 (success)
*/
int main(void)
{
int digo = 0, digos;
while (digo <= 9)
{
digos = 0;
while (digos <= 9)
{
if (digo != digos && digo < digos)
{
putchar(digo + 48);
putchar(digos + 48);

if (digo + digos != 17)
{
putchar(',');
putchar(' ');
}
}
digos++;
}
digo++;
}
putchar('\n');
return (0);
}
