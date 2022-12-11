#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

extern char **environ;

int shell(void);
char *_get_line();
int split_line(char *line, char *argv[]);
int check_builtin_func(char *argv[], char **env);
int _execve(char *path, char *argv[], char **envp);
int _strlen(char *s);
int search_path(char *command);
char *_getenv(char *name);

/**
 * struct builfunc - Structure of builtin functions
 * @name: command to match
 * @func: Name of the function
 */
typedef struct builfunc
{
	char *name;
	int (*func)(char *argv[], char **env);
} builfunc_t;

int shell_cd(char *argv[], char **env);
int shell_exit(char *argv[], char **env);
int shell_env(char *argv[], char **env);

#endif /* _SHELL_H_ */
