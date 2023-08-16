#include <stdio.h>
/**
*main - entry point
*
*description print all single digit numbers of base 10 starting from 0
*
*Return: always 0 (success)
*/

int main(void)
{
	int digt = 0;

while (digt <= 9)
{
/*convert digt to ASCII representation*/
putchar(digt + '0');
digt++;
}
putchar('\n');

return (0);
}
