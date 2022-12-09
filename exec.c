#include "shell.h"

/**
 * _execve - allows to execute another program
 * @path: the path of the file for execution of a new process
 * @argv: the name of the editable file
 * @env: the environment list
 * Return: 0 if succeeds, -1 if it's eof
 */
int _execve(__attribute__((unused)) char *path, char *argv[], char **env)
{
		pid_t child_pid;
		int status;

		child_pid = fork();
		if (child_pid == -1)
		{
			return (-1);
		}
		if (child_pid == 0)
		{

			if (execve(argv[0], argv, env) == -1)
			{
				perror(argv[0]);
				return (-1);
			}
			return (0);
		}
		else
		{
			wait(&status);
		}
		return (0);
}
