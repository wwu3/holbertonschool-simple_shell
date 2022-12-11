#include "shell.h"

/**
 * _execve - allows to execute another program
 * @path: the path of the file for execution of a new process
 * @argv: the name of the editable file
 * @env: the environment list
 * Return: 0 if succeeds, -1 if it's eof
 */
int _execve(__attribute__((unused)) char *path, char *argv[],
	    __attribute__((unused))char **env)
{
	pid_t child_pid;
	int status;

	if (search_path(argv[0]) == -1)
	{
		return(-1);
	}
	child_pid = fork();
	if (child_pid == -1)
	{
		return (-1);
	}
	if (child_pid == 0)
	{
		if (execvp(argv[0], argv) == -1)
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

	return (0);
}

int search_path(char *command)
{
	char *tmp, *path, *test_path;

	if (access(command, X_OK) == 0)
	{
		return (0);
	}

        path = strdup(_getenv("PATH"));
	if (path == NULL)
	{
		perror("strdup");
		return (-1);
	}
	test_path = malloc(128 * sizeof(char));
	if (test_path == NULL)
	{
		perror("malloc");
		return (-1);
	}

	tmp = strtok(path, ":");
	while (tmp != NULL)
	{
		sprintf(test_path, "%s/%s", tmp, command);
		if (access(test_path, X_OK) == 0)
		{
			return (0);
		}
		tmp = strtok(NULL, ":");
	}

	free(test_path);
	free(path);

	printf("%s: not found\n", command);
	return (-1);
}

char *_getenv(char *name)
{
	int i;
	char *tmp;

	i = 0;
	while ( environ[i] != NULL)
	{
		if(strstr(environ[i], name) != NULL)
		{
			tmp = environ[i];
			tmp = strtok(tmp, "=");
			tmp = strtok(NULL, "=");
			return (tmp);
		}
		i = i + 1;
	}
	return (NULL);
}
