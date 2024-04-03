#include "shell.h"
/**
 * loop - shell loop
 * @program: name of shell
 *
 */

void loop(char *program)
{
	char *line;
	char **args;
	int status, x;

	env = _environ();
	main_path = make_path();
	line_num = 0;

	status = 1;
	while (status)
	{
		line_num++;
		line = read_line();
		if (line[0] == '\n')
		{
			free(line);
			continue;
		}
		args = tokenize(line, "\n ");
		if (check_builtin(args, line) == 1)
			status = execute(args, program);
		x = 0;
		while (args[x] != NULL)
		{
			if (args[x])
				free(args[x]);
			x++;
		}

		if (line)
			free(line);
		if (args)
			free(args);
	}
	free_path(main_path);
	free_path(env);
}