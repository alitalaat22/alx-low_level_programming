#include "shell.h"

/**
 * make_path - make path
 *
 * Return: returns the head of the path;
 */

path_t *make_path(void)
{
	path_t *head;
	path_t *temp;
	char *path_name, *token;

	path_name = NULL;
	temp = malloc(sizeof(path_t));
	if (!temp)
		return (NULL);

	path_name = _getenv("PATH");

	if (!path_name)
	{
		free(temp);
		return (NULL);
	}

	token = _strtok(path_name, ":");

	head = temp;
	while (token)
	{
		temp->dir = _strdup(token);
		token = _strtok(NULL, ":");
		if (token)
		{
			temp->next = malloc(sizeof(path_t));
			if (!temp->next)
			{
				free_path(head);
				return (NULL);
			}
			temp = temp->next;
		}
		else
			temp->next = NULL;
	}
	free(path_name);
	return (head);
}

/**
 * free_path - frees a linked list
 * @head: linked list
 *
 */

void free_path(path_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_path(head->next);
	free(head->dir);
	free(head);
}

/**
 * free_env - frees a linked list
 * @head: linked list
 *
 */
void free_env(path_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_path(head->next);
	free(head);
}