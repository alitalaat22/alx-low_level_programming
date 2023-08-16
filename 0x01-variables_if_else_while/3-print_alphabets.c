#include <stdio.h>
/**
*main - entry point
*
*description print alphaber in lowercase then in uppercase
*
*Return: (0); (Success)
*/

int main(void)
{
char lo = 'a';
char upp = 'A';
while (lo <= 'z')
{
putchar(lo);
lo++;
}
while (upp <= 'Z')
{
putchar (upp);
upp++;
}
putchar ('\n');
return (0);
}
