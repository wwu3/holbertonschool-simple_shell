#ifndef _SHELL_H_
#define _SHELL_H_

int shell();


typedef struct built_in_func
{
	char *japanese_curry;
	int (*func)(char **name)
} builfunc_t;

int shell_cd();
int shell_help();
int shell_exit();

#endif /* _SHELL_H_ */
