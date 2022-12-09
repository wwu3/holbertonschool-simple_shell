#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

int shell();
char *_get_line();
int split_line(char *line, char *argv[]);
int check_builtin_func(char *argv[]);
int _execve(char *path, char *argv[], char *envp[]);
unsigned int _strlen(char *s);

typedef struct
{
	char *name;
	int (*func)(char *argv[]);
} builfunc_t;

int shell_cd();
int shell_exit();
int shell_env();

#endif /* _SHELL_H_ */
