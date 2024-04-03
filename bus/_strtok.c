#include "shell.h"

/**
 * is_delim - check if char is equal to delim
 * @c: character
 * @delim: " "
 * Return: 0 if no match, 1 if matched
 */

int is_delim(char c, const char *delim)
{
	while (delim && *delim)
	{
		if (c == *delim)
		{
			return (1);
		}
		++delim;
	}
	return (0);
}

/**
 * _strtok - mimics strtok, which tokenizes a string and turn to array
 * @src: string from getline
 * @delim: " ";
 * Return: individual token in array format
 */

char *_strtok(char *src, const char *delim)
{
	static char *s;
	static unsigned int i;
	char *result = NULL;
	int is_space = 0;

	if (src)
	{
		s = src;
		for (i = 0; s[i]; i++)
		{
			if (is_delim(s[i], delim))
				s[i] = '\0';
		}
	}

	if (s == NULL || *s == '\0')
		return (NULL);
	result = s;
	i = _strlen(s);
	if (s[i] == '\0' && _strlen(s) > 0)
		is_space = 1;
	s = s + _strlen(s) + is_space;
	return (result);
}