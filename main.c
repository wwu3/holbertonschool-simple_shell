#include <stdio.h>
#include <stdlib.h>
#include "shell.h"

/**
 *
 *
 */

int shell(char **buff)
{
	int num = 0, call = 0;
	int argc;
	char *argv[128];
	char *delim = " ";

	while (num == 0)
	{
		if (_get_line(*buff) == -1)
		{
			return (1);
		}

		argc = split_line(*buff, delim, argv);
		if (argc <= 0)
		{
			return (-1);
		}

		call = check_builtin_func(argv);
		if (call == -1)
		{
			_execve(argv[0], argv, NULL);
		}
	}
	return (0);
}

/**
 *
 *
 *
*/
int main()
{
	char *buff;
	size_t buffsize = 128;

	buff = malloc(buffsize * sizeof(char));
	if (buff == NULL)
	{
		return (-1);
	}

	shell(&buff);
	return(0);
}
