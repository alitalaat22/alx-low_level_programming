#include <stdio.h>
/**
 * main - the entry point
 *
 * Description: a program that prints from 1 to 100, then a new line
 * Return: 0 (success)
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 15) == 0)
{
printf("FizzBuzz");
}
else if ((i % 5) == 0)
{
printf("Buzz");
}
else if ((i % 3) == 0)
{
printf("Fizz");
}
else
{
printf("%d", i);
}
if (i < 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
