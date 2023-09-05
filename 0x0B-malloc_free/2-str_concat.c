#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - fundtn creates a new array
 * @s1: first pointer input
 * @s2: second pointer input
 *
 * Return: pointer of char
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l = 0, m = 0, k = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[i] != '\0'; i++)
		;
	for (; s2[j] != '\0'; j++)
		;
	j++;
	ptr = malloc((i + j) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (m < i)
		ptr[k++] = s1[m++];
	while (l < j)
		ptr[k++] = s2[l++];
	return (ptr);
}
