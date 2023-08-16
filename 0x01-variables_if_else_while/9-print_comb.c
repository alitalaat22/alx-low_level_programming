#include <stdio.h>
/**
*main -entry point
*
* description is prints all possible combinations of single-digit numbers
*
* Return: Always 0 (seccess)
*/
int main(void)
{
int digo = 0;
while (digo <= 9)
{
putchar(digo + 48);
if (digo != 9)
{
putchar(',');
putchar(' ');
}
digo++;
}
putchar('\n');

return (0);
}
