#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * description is if last digit greatr than 5 and less than 6 and not 0
 * ,and is 0 must be printf
 *
 * Return: (0); (Success)
 */
int main(void)
{
	int n, dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dig = n % 10;
printf("Last digit of %i is %i and is", n, dig);
if (dig > 5)
printf("greater than 5\n", n, dig);
else if (dig == 0)
printf("0\n", n, dig);
else if (dig < 6 && dig != 0)
printf("less than 6 and not 0\n", n, dig);

	return (0);
}
