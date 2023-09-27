#include "lists.h"

/**
*list_len - number elemments
*
*@h: list_t linked list
 * Return:  the number of elements in a linked list_t list.
*/

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			count++;
		h = h->next;
	}
	return (count);
}
