#include "main.h"
#include <stdio.h>

/**
* _strncat - Concatenates two strings.
* @dest: Destination string.
* @src: String to append.
* @n: Number of bytes to be copied.
* Return: Destination string.
*/
char *_strncat(char *dest, char *src, int n)
{
int x;
int y;

for (x = 0; dest[x] != '\0'; x++)
;
for (y = 0; y < n && src[y] != '\0'; y++)

dest[x + y] = src[y];
dest[x + y] = '\0';

return (dest);
}
