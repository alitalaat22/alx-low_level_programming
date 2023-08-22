#include "main.h"

/**
 *  _puts - a function that prints a string, followed by a new line, to stdout.
 *@Str: parametar
 * Return: returns always (0)
 */

void _puts(char *Str)
{

while (*Str != '\0')
{
	_putchar(*Str + 0);
	Str++;
}
_putchar('\n');
}
