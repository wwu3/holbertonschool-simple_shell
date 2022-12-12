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

		argv[0] = search_path(argv[0]);

		if (access(argv[0], X_OK) != 0)
		{
			perror("non executable");
			return (-1);
		}
		child_pid = fork();
		if (child_pid == -1)
		{
			free(argv[0]);
			return (-1);
		}
		if (child_pid == 0)
		{
			if (execve(argv[0], argv, env) == -1)
			{
				perror(argv[0]);
				exit(-1);
			}
			exit(0);
		}
		else
		{
			waitpid(child_pid, &status, 0);
		}
		free(argv[0]);
		return (0);
}

/**
 * search_path - Searches for a sting in the PATH env
 * @command: a command to search for
 * Return: a pointer to the path in which the command was found,
 * returns the command if nothing was found, and NULL on failure.
 */
char *search_path(char *command)
{
	char *tmp, *path, *test_path;

	path = strdup(_getenv("PATH"));
	if (path == NULL)
	{
		perror("strdup");
		return (NULL);
	}
	test_path = malloc(128 * sizeof(char));
	if (test_path == NULL)
	{
		perror("malloc");
		return (NULL);
	}

	tmp = strtok(path, ":");
	while (tmp != NULL)
	{
		sprintf(test_path, "%s/%s", tmp, command);
		if (access(test_path, X_OK) == 0)
		{
			free(path);
			return (test_path);
		}
		tmp = strtok(NULL, ":");
	}
	free(path);
	strcpy(test_path, command);
	return (test_path);
}

/**
 * _getenv - retrieves an env variable from the environment
 * @name: the name of the var
 * Return: the value stored in the var or NULL on failure
 */
char *_getenv(char *name)
{
	int i = 0;
	char *env_var;

	while (environ[i] != NULL)
	{
		if (strncmp(environ[i], name, strlen(name)) == 0)
		{
			env_var = &environ[i][strlen(name) + 1];
			return (env_var);
		}
		i = i + 1;
	}
	return (NULL);
}
