#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
*/
int check_builtin_func(char **command)
{
	int i;

	i = 0;
	builfunc_t func[]={
		{"cd", shell_cd},
		{"help", shell_help},
		{"exit", shell_exit},
		{NULL, NULL}
	};

	while (func[i] != NULL)
	{
		if (strcmp(command[0], func[i].name) == 0)
		{
			return (func[i].)
		}
	}
}
