#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: character to be computed
 *
 * Return: 0 Success
 */
int _abs(int c)
{
	if (c < 0)
	c *= (-1);
	return (c);
}
