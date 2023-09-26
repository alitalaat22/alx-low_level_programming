#include "lists.h"

/**
*print_list - print all elemments
*
*@h: pointer is return the number of nodes
*
*Return: Always 0 (success)
*/

size_t print_list(const list_t *h)
{
int count = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");

else
printf("[%d] %s\n", h->len, h->str);
count++;
h = h->next;
}
return (count);
}
