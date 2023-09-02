#include "main.h"
/**
 * _strcpy - functn reverse array
 * @dest: my first input
 * @src: second input
 *
 * Description: function reverse array
 *
 * Return: copy of str
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
