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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
printf("Last digit of %i is %i\n", n, n % 10);
if (n % 10 > 5)
printf("Last digit of %i is %.1i and is greater than 5 \n", n, n % 10);
else if (n % 10 == 0)
printf("Last digit of %i is %.2i and is 0 \n", n, n % 10);
else if (n % 10 < 6 && n % 10 != 0)
printf("Last digit of %i is %.3i and is less than 6 and not 0 \n", n, n % 10);

	return (0);
}
