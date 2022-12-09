#include "shell.h"

/**
 *
 *
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
