#include "shell.h"

/**
 * locate_env - find env associated with name
 * @name: name of string to be found
 * Return: 0 if success, -1 if fail
 */

int locate_env(char *name)
{
	path_t *temp;
	int x = 0;
	int y = 0;

	temp = env;
	while (temp)
	{
		y = 0;
		while (name[y] == temp->dir[y])
		{
			y++;
			if (name[y + 1] == '\0' && (temp->dir)[y + 1] == '=')
				return (x);
		}
		x++;
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	return (x);
}


/**
 * _setenv - create a new environment variable
 * @name: key
 * @value: value
 * Return: 0 if success, -1 if fail
 */
void _setenv(char *name, char *value)
{
	path_t *holder, *temp, *new;
	char *concat_value, *final_value;
	int concat_len = 0;
	int curr_i = 0;
	int counter = 0;

	if (!name || !value)
	{
		perror("Error: Missing name or value");
		exit(0);
	}

	/*returns a pointer to the value of name*/
	curr_i = locate_env(name);

	new = malloc(sizeof(path_t));
	if (!new)
	{
		perror("99 Problems and you are one of them\n");
	}

	concat_value = _strcat(name, "=");
	concat_len = _strlen(concat_value);
	final_value = _realloc(concat_value, concat_len, (concat_len + _strlen(value) + 1));
	_strncpy(final_value, value, concat_len);

	holder = env;
	temp = env;
	if (curr_i >= 0)
	{
		while (counter != (curr_i - 1)) /*stop one node prior to curr_value*/
		{
			temp = temp->next;
			holder = holder->next;
			counter++;
		}
		holder = holder->next; /*pointing to node to be deleted*/
		new->dir = final_value;
		new->next = temp->next->next;
		temp->next = new;
		free(holder);
	}
	else /*add the new environ at the end*/
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		new->dir = final_value;
		temp->next = new;
		new->next = NULL;
	}
	free(concat_value);
}