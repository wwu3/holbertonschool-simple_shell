#include "shell.h"

/**
 * shell_cd - implementing cd command
 * @pth: path of directory
 * Return: -1 if function fails
 */

int shell_cd(char *argv[])
{

        char cwd[128];

	if(argv[1][0] != '/')
	{
		getcwd(cwd, sizeof(cwd));
		strcat(cwd, "/");
		strcat(cwd, argv[1]);
		chdir(cwd);
	}
	else
	{
		chdir(argv[1]);
	}
	return (0);
}

int shell_help()
{
	;
}

int shell_exit()
{
	exit(0);
}
