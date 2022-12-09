#include "shell.h"

/**
 *
 *
 *
*/
int check_builtin_func(char *argv[], char **env)
{
	int i;

	i = 0;
	builfunc_t f[]={
		{"cd", shell_cd},
		{"env", shell_env},
		{"exit", shell_exit},
		{NULL, NULL}
	};

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
