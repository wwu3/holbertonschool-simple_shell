#ifndef _SHELL_H_
#define _SHELL_H_
#include <string.h>

int shell();
int check_builtin_func(char **command, char **argv);


typedef struct japanese_curry
{
	char *name;
	int (*func)(char **argv)
} builfunc_t;

int shell_cd();
int shell_help();
int shell_exit();

#endif /* _SHELL_H_ */
