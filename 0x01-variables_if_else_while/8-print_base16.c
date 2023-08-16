#include <stdio.h>
/**
*main -entry point
*
* description is prints all the numbers of base 16 in lowercase
*
* Return: Always 0 (seccess)
*/
int main(void)
{
int digo = 48;
while (digo <= 102)
{
putchar(digo);
if (digo == 57)
digo += 39;
digo++;
}
putchar('\n');

return (0);
}
