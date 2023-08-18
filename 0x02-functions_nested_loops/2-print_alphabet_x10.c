#include "main.h"


/**
*print_alphabet_x10 - print_alphabet_x10
*
*/

void print_alphabet_x10(void)

{
for (int num = 0; num < 9; num++)
{
for (char alpha = 'a' ; alpha <= 'z'; alpha++)
_putchar(alpha);
_putchar('\n');
}
}
