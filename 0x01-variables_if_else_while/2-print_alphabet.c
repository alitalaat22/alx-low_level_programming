#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * This function prints the alphabet in lowercase, followed by a new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
char d = 'a';
while (d <= 'z')
{
putchar (d);
d++;
}
putchar ('\n');
	return (0);
}
