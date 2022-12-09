#include "shell.h"

/**
 * shell_cd - implementing cd command
 * @argv: path of directory
 * @env: unused variable
 * Return: -1 if function fails
 */

int shell_cd(char *argv[], __attribute__((unused)) char **env)
{
	char cwd[128];

	if (argv[1][0] != '/')
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
 * @argv: unused variable
 * @environ: environment variable
  * Return: -1 if fails
 */


int shell_env(__attribute__((unused)) char *argv[], char **environ)
{
	int i;

	i = 0;
	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i = i + 1;
	}
	return (0);
}

/**
 * shell_exit - Exits the shell
 * @argv: Unused variable
 * @env: Unused variable
 */
int shell_exit(__attribute__((unused))char *argv[],
	       __attribute__((unused))char **env)
{
	exit(0);
}
