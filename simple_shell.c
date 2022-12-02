#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

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
		argv[0] = strtok(buff, delim);
		test = strtok(NULL, delim);
		if (strcmp(buff, "exit") == 0)
		{
			return (0);
		}	
		while(test != NULL)
		{
			argv[argc] = test;
			argc = argc + 1;
			test = strtok(NULL, delim);
		}
	
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
