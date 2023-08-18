#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 1 Success
 */

void jack_bauer(void)
{
int hr, min;

	for (hr = 0; hr <= 23; hr++)
{
	for (min = 0; min <= 59; min++)
	{
	_putchar(48 + hr / 10);
	_putchar(48 + hr % 10);
	_putchar(':');
	_putchar(48 + min / 10);
	_putchar(48 + min % 10);
	_putchar('\n');
}
}
}
