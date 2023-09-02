#include "main.h"

/**
 * _strcat - a function that concatenates
 * @dest: first pointer
 * @src: second pointer
 *
 * Return: pointer
 */


char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
i++;
while (src[j])
{

dest[i++] = src[j];
j++;
}
return (dest);
}
