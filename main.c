#include "shell.h"

/**
 *
 *
 */

int shell()
{
	char *buff;
	int num = 0, call = 0;
	int argc;
	char *argv[128];

	while (1)
	{
		buff = _get_line();
		if (_strlen(buff) > 128)
		{
			return(-1);
		}
		argc = split_line(buff, argv);
		if (argc <= 0)
		{
			return (-1);
		}
		//free(buff);
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
	shell();
	return(0);
}
