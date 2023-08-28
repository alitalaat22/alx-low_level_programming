#include "main.h"
/**
* _strcat - concatenate two strings
* @dest: char string to concatenate to
* @src: char string
*Return: dest
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
