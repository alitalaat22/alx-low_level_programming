#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*if n bigger than 0*/
/*if n equall 0*/
/*if n else 0*/
/**
 * main - main function of the program
 *
 *generates a random number
 *and determines if the number is positive, negative or zero.
 *
 * Return: A value of zero to indicate that the execution was successful.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
printf("%d ", n);
if (n > 0)
printf("is positive\n");
else if (n < 0)
printf("is negative\n");
else
printf("is zero\n");
	return (0);
}
