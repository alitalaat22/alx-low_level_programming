#include "main.h"

/**
 *swap_int - a function that swaps the values of two integers.
 *@a:num_1 to check
 *@b: num_2 to check
 *
 * Return: always (0)
 */

void swap_int(int *a, int *b)
{
	int x = *b;
	*b = *a;
	*a = x;

}
