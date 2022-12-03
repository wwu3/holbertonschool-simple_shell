#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include "shell.h"
extern char ** environ;
int main()
{
	char *buff, *test;
	char *delim = " ";
	size_t buffsize = 32;
	char *s = "\n";
	int num, status, argc;
	pid_t child_pid;
	char *argv[1000];

	buff = malloc(buffsize * sizeof(char));
	if (buff == NULL)
	{
		return (-1);
	}
	num = 0;
	argc = 1;
	while (num == 0)
	{
		putchar('$');
		putchar(' ');

		getline(&buff, &buffsize, stdin);

		buff = strtok(buff, s);

		if (strcmp(buff, "exit") == 0)
		{
			return (0);
		}
		argc = split_line(buff, delim, argv);

		if (argc <= 0)
		{
			return (-1);
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
				perror("Error:");
			}
		}
		else
		{
			wait(&status);
		}
	}
	return (0);
}
