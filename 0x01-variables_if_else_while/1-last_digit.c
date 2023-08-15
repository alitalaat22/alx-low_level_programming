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
int n, dight;

srand(time(0));
n = rand() - RAND_MAX / 2;
dight = n % 10;

if (dight > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, dight);
else if (dight == 0)
printf("Last digit of %i is %i and is 0\n", n, dight);
else if (dight < 6 && dight != 0)
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, dight);
return (0);
}
