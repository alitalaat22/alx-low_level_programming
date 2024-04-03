#include "shell.h"
/**
 * _strcpy - copies string from one pointer to a new pointer
 * @dest: the destination pointer for the copied string
 * @src: the origin pointer of the copied string
 *
 * Return: returns the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
	{
		*dest  = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}

/**
 * _strlen - returns the length of a string
 * @s: string we find the length of
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	return (x);
}

/**
 * _strdup - returns a pointer to newly allocated space in memory that contains
 * a copy of the string given as a parameter
 * @str: string to copy
 *
 * Return: returns a pointer to the copied string
 */

char *_strdup(char *str)
{
	int x;
	char *s;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char) * (_strlen(str) + 1));
	if (s == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		s[x] = str[x];
	s[x] = '\0';
	return (s);
}

/**
 * path_concat - concatenates directories and command
 * @s1: first string
 * @s2: second string
 *
 * Return: returns a pointer to the concatenated string
 */

char *path_concat(char *s1, char *s2)
{
	int x, y;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 2));
	if (s == NULL)
		return (NULL);

	for (x = 0; s1[x]; x++)
		s[x] = s1[x];
	s[x] = '/';
	x++;
	for (y = 0; s2[y]; y++)
		s[x + y] = s2[y];
	s[x + y] = '\0';
	return (s);
}

/**
 * _strcat - regular string concatenation w/ two strings
 * @dest: first string
 * @src: second string
 *
 * Return: returns a pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;
	int len1 = 0;
	int len2 = 0;
	char *result;

	while (dest[len1])
	{
		len1++;
	}
	while (src[len2])
	{
		len2++;
	}
	result = malloc(sizeof(len1 + len2 + 2));

	for (i = 0; dest[i] != '\0'; i++)
	{
		result[i] = dest[i];
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		result[i] = src[j];
		i++;
	}
	result[i] = '\0';
	return (result);
}