#include <stdio.h>
#include <stdlib.h>
#include "shell.h"
/**
 *
 *
 *
*/
int check_builtin_func(char **command,char **argv)
{
	int i;

	i = 0;
	builfunc_t f[]={
		{"cd", shell_cd},
		{"help", shell_help},
		{"exit", shell_exit},
		{NULL, NULL}
	};

	while (f[i].func != NULL)
	{
		if (strcmp(command[0], f[i].name) == 0)
		{
			return (f[i].func(argv));
		}

		i = i + 1;
	}
	return (0);
}
