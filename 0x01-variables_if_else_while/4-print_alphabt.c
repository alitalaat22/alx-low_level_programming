#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * description is prints the alphabet in lowercase, followed by a new line.
 *
 * Return: (0); (Success)
 */
int main(void)
{
char lo = 'a';
while (lo <= 'z')
{
if (lo == 'e' && 'q')
lo++;
putchar(lo);
lo++;
}
putchar ('\n');
return (0);
}
