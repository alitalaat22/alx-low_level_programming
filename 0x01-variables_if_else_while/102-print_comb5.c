#include <stdio.h>
/**
*main - entry point
*
* description prints all  possible combinations of two two-digit numbers.
*
* Return: Always 0 (success)
*/
int main(void)
{
int fidi = 0, sedi;

while (fidi <= 99)
{
sedi = fidi;
while (sedi <= 99)
{
if (sedi != fidi)
{
putchar((fidi / 10) + 48);
putchar((fidi % 10) + 48);
putchar(' ');
putchar((sedi / 10) + 48);
putchar((sedi % 10) + 48);
if (fidi != 98 || sedi != 99)
{
putchar(',');
putchar(' ');
}
}
sedi++;

}
fidi++;
}
putchar('\n');

return (0);
}
