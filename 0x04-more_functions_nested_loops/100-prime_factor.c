#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0 (success)
 */
int main(void)
{
long n = 612852475143;
long i = 2;
long max = 0;
do {
while (i <= n)
{
if ((n % i) == 0)
{
n = n / i;
if (i > max)
{
max = i;
}
}
else
{
i++;
}
}
}
while (i <= n);
printf("%ld\n", max);
return (0);
}
