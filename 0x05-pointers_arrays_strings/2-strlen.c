#include "main.h"

/**
 *  _strlen - a function that returns the length of a string.
 *@S: STRING WILL BE WRITE
 * Return: returns  (i) the length of a string.
 */



int _strlen(char *S)
{
int i = 0;
while (*S++)
{
i++;
}

return (i);
}
