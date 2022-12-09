#include "shell.h"

/**
 * shell_cd - implementing cd command
 * @argv: path of directory
 * Return: -1 if function fails
 */

int shell_cd(char *argv[], char** env)
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

/**
 * _getenv - Prints environment variables
  * Return: -1 if fails
 */


int shell_env(char *argv[], char **environ)
{
	int i;
	printf("***********HAPPY*********\n");
	i = 0;
	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i = i + 1;
	}
	return (1);
}

int shell_exit(char *argv[], char **env)
{
	exit(0);
}
