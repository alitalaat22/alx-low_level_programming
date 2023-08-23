#include "main.h"

/**
 *print_rev(char *s)-rev
 *
 *@s: parametar
 *
 *Discription:Write a function that prints a string, in reverse
 *REturn: Always 0 (success)
 */
void print_rev(char *s)
{
int x = 0;
while (s[x] != '\0')
x++;
while (x--)
_putchar(s[x]);
_putchar('\n');



}
