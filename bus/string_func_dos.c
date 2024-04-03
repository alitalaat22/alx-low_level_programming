#include "shell.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Returns 0 if strings are same size. Positive difference if
 * s1 is greater than s2. Negative difference if s1 is smaller than s2.
 */

int _strcmp(char *s1, char *s2)
{
	/* check both strings size and determine if one is larger*/
	while ((*s1 == *s2) && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else
		return ((int)(*s1 - *s2));
}

/**
 * *_strncpy - copy string starting at specific index of DEST
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: len of dest
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++, n++)
		dest[n] = src[i];
	dest[n] = '\0';
	return (dest);
}

/**
 * *_strncpy2 - copy string starting at specific index of SRC
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: len of dest
 *
 * Return: copied string
 */
char *_strncpy2(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[n] != '\0'; i++, n++)
		dest[i] = src[n];
	dest[i] = '\0';
	return (dest);
}