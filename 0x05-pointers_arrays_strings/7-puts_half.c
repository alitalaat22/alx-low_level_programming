#include "main.h"
/**
 * puts_half - functn prints half string
 * @str: my input
 *
 * Description: function prints second half
 */
void puts_half(char *str)
{
	int i, x, r;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 == 0)
	{
		r = (i / 2);
	}
	else
	{
		r = ((i + 1) / 2);
	}
	for (x = r; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
