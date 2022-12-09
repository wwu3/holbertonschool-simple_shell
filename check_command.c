#include "shell.h"

/**
 * check_builtin_func - check and execute the corresponding function
 * @argv: pointer to char input
 * @env: Environment variable
 * Return: -1 if fails
 */

int check_builtin_func(char *argv[], char **env)
{
	int i;


	builfunc_t f[] = {
		{"cd", shell_cd},
		{"env", shell_env},
		{"exit", shell_exit},
		{NULL, NULL}
	};

	i = 0;
	while (f[i].func != NULL)
	{
		if (strcmp(argv[0], f[i].name) == 0)
		{
			return (f[i].func(argv, env));
		}

		i = i + 1;
		}
	return (-1);
}
