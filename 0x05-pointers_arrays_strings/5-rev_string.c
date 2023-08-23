#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 *@s: to check
 * Return: returns always (0)
 */

void rev_string(char *s)
{
int i;
	char temp;
	int x = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	while (x < (i / 2))
	{
		temp = s[x];
		s[x] = s[i - x - 1];
		s[i - x - 1] = temp;
		x++;
	}
}
