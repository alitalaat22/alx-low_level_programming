#include "main.h"
/**
* rot13 - Encodes a string using rot13.
* @s: String to encode.
* Return: Encoded string.
*/
char *rot13(char *s)
{
	int a[] = {-1, 1};
	char *t = s;

	while (*s != '\0')
	{
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			*s = *s + 13 * a[*s <= 'M' || (*s >= 'a' && *s <= 'm')];
		}
		s++;
	}
	return (t);
}
