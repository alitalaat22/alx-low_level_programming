#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the sum of the even-valued terms,
 *              followed by a new line
 *
 * Return: 0 (Success)
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%0.0f\n", total_sum);
	return (0);
}
