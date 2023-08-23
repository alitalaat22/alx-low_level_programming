#include "main.h"
/**
 * puts2 - function prints every other char of a string
 * @str: my input
 *
 * Description: function prints arr.
 *
 * Return: length
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
