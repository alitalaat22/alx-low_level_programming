#include "shell.h"
/**
 * _environ - builds an environment linked list
 *
 * Return: returns a pointer to the head of the linked list
 */
path_t *_environ(void)
{
	path_t *head;
	path_t *vagabond;
	int x = 0;

	head = malloc(sizeof(path_t));
	if (!head)
		return (NULL);
	vagabond = head;
	while (environ[x])
	{
		vagabond->dir = _strdup(environ[x]);
		if (environ[x + 1] != NULL)
		{
			vagabond->next = malloc(sizeof(path_t));
			vagabond = vagabond->next;
		}
		x++;
	}
	vagabond->next = NULL;
	return (head);
}