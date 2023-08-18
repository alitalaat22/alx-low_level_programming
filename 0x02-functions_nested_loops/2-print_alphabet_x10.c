#include "main.h"


/**
*print_alphabet_x10 - print_alphabet_x10
*
*/

void print_alphabet_x10(void)

{
int i;
char alpha;

for (i = 0; i <= 9; i++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
}
