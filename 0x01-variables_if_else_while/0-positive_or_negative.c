#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*if n bigger than 0*/
/*if n equall 0*/
/*if n else 0*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
printf("is positive\n");
else if (n < 0)
printf("is negative\n");
else
printf("is zero\n");
	return (0);
}
