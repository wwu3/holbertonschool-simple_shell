#include "shell.h"

/**
 * shell_cd - implementing cd system call
 * @pth: path of directory
 * Return: -1 if function fails
 */

int shell_cd(char *pth)
{
    char path[200];
    char cwd[200];

    strcpy(path,pth);
    if(pth[0] != '/')
    {// true for the dir in cwd
        getcwd(cwd, sizeof(cwd));
        strcat(cwd, "/");
        strcat(cwd, path);
        chdir(cwd);
    }
    else
    {//true for dir w.r.t. /
        chdir(pth);
    }
    return (0);
}

int shell_help()
{
	;
}

int shell_exit()
{
	putchar('y');
	exit(0);
}
