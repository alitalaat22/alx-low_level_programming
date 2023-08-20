#include "main.h"
/**
 * _isupper - functn check upper cases
 * @c: input integer
 *
 * Description: check for upper cases letters
 * Return: 0, 1 (success)
 */
int _isupper(int c)
{
if ((c >= 65) && (c <= 90))
{
return (1);
}
else
{
return (0);
}
}
