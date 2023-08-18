#include "main.h"
#include <unistd.h>

/**
 * main - Entry Point
 *
 * Description prints _putchar
 *
 * Return: 0 Success
 */
int main(void)
{
char str[] = "_putchar";
int c;
for (c = 0; c < 8; c++)
_putchar(str[c]);

_putchar('\n');

return (0);
}
