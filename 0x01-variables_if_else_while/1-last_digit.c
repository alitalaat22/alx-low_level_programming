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
printf("Last digit of %d is %d\n", n, n % 10);
if (n % 10 > 5)
printf("Last digit of %d is %.1d and is greater than 5 \n", n, n % 10);
else if (n % 10 == 0)
printf("Last digit of %d is %.2d and is 0 \n", n, n % 10);
else if (n % 10 < 6 && n % 10 != 0)
printf("Last digit of %d is %.3d and is less than 6 and not 0 \n", n, n % 10);

	return (0);
}
