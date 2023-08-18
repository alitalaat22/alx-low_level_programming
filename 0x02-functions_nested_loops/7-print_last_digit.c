#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: 1 Success
 */
int print_last_digit(int n)
{
	int d;

	if (n < 0)
	d = (-1) * (n % 10);
	else
	d = n % 10;
	_putchar(48 + d);
	return (d);
}
