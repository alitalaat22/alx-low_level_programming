#include "main.h"
#include <stdio.h>

/**
*_isdigit - function check digits
 * @c: input integer
 *
 * Description: check for digits (0 : 9)
 * Return: 1 (success) is not 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
}
else
return (0);
}
