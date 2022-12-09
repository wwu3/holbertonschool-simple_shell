#include "shell.h"
extern char **environ;

/**
 *shell - Prompt to user input 
 *Return: 0
 */

int shell()
{
	char *buff;
	int num = 0, call = 0, i = 0;
	int argc;
	char *argv[128];

	while (1)
	{
		buff = _get_line();
		if (_strlen(buff) > 128)
		{
		        continue;
		}
		argc = split_line(buff, argv);

		if (argc <= 0)
		{
			continue;
		}
		call = check_builtin_func(argv, environ);
		if (call == -1)
		{
			_execve(argv[0], argv, environ);
		}
	}
	return (0);
}

/**
 * main - 
 *
 *
*/
int main()
{

	shell();
	return(0);
}
