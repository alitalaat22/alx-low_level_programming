#include <stdio.h>
/**
*main - entry point
*
*description print all single digit numbers of base 10 starting from 0
*
*return: always  0 (success)
*/

int main(void)
{
	int digt = 0;

while (digt <= 9)
{
/*convert digit to ASCII representation*/
putchar(digt + '0');
digt++;
}
putchar('\n');

return (0);
}
