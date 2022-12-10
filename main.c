#include "shell.h"
/*extern char **environ;*/

/**
 *shell - Prompt to user input
 *Return: 0 on success and -1 if fails
 */

int shell(void)
{
	char *buff;
	int call;
	int argc;
	char *argv[128];

	call = 0;
	while (1)
	{
		buff = _get_line();
		if (buff == NULL)
		{
			return (-1);
		}
		if (_strlen(buff) > 128)
		{
			continue;
		}
		argc = split_line(buff, argv);
		if (argc <= 0)
		{
			free(buff);
			continue;
		}
		call = check_builtin_func(argv, environ);
		if (call == -1)
		{
			_execve(argv[0], argv, environ);
		}
		free(buff);
	}
	return (0);
}

/**
 * main - starting point
 * Return: Always 0
 *
*/
int main(void)
{

	shell();
	return (0);
}
