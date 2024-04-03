#include "shell.h"
/**
 * __error - handle all error
 * @args: arguments passed in
 * @cmd: command
 * @code: specific code
 */
void __error(char **args, char *cmd, int code)
{
	char *str_num;

	str_num = _itoa(line_num);
	write(STDOUT_FILENO, cmd, _strlen(cmd));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, str_num, _strlen(str_num));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, args[0], _strlen(args[0]));

	if (code == 1)
	{
		write(STDOUT_FILENO, ": not found\n", 13);
		exit(127);
	}
	if (code == 2)
	{
		write(STDOUT_FILENO, ": command not found\n", 21);
		exit(0);
	}
	if (code == 3)
	{
		write(STDOUT_FILENO, ": no such file or directory\n", 29);
		exit(0);
	}
}