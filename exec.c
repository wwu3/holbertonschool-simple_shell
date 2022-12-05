#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int _execve(const char *path, char *const argv[], char *const envp[])
{
		pid_t child_pid, parent_pid;
		int status;
		
		parent_pid = getppid();
		child_pid = fork();
		if (child_pid == -1)
		{
			return (-1);
		}
		if (child_pid == 0)
		{
			printf("%s", argv[0]);

			if (execve(argv[0], argv, NULL) == -1)
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
