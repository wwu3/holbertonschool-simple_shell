#ifndef _SHELL_H_
#define _SHELL_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

int shell();
int _get_line(char *buffer);
int split_line(char *line, char *delim, char *argv[]);
int check_builtin_func(char *argv[]);
int _execve(char *path, char *argv[], char *envp[]);

typedef struct japanese_curry
{
	char *name;
	int (*func)(char *argv[]);
} builfunc_t;

int shell_cd();
int shell_help();
int shell_exit();

#endif /* _SHELL_H_ */
