#include <stdio.h>
/**
*main - Entry point
*
* description prints all possible different combinations of three digits.
*
*Return: Always 0 (success)
*/
int main(void)
{
int digo = 0;
int digo1, digo2;
while (digo <= 9)
{
digo1 = 0;
while (digo1 <= 9)
{
digo2 = 0;
while (digo2 <= 9)
{
if (digo != digo1 && digo < digo1 && digo1 != digo2 && digo1 < digo2)
{
putchar(digo + 48);
putchar(digo1 + 48);
putchar(digo2 + 48);

if (digo + digo1 + digo2 != 24)
{
putchar(',');
putchar(' ');
}
}
digo2++;
}
digo1++;
}
digo++;
}
putchar('\n');
return (0);
}
