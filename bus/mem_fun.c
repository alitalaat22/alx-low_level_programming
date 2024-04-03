#include "shell.h"
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memory
 * @old_size: size of the old allocated space
 * @new_size: size of the new allocated space
 *
 * Return: new pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i = 0;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	for (i = 0; i < new_size && i < old_size; i++)
		p[i] = ((char *)ptr)[i];
	return (p);
}