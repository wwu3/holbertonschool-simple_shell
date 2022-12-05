#include <stdio.h>
#include <stdlib.h>
#include "shell.h"

/*
 *
 *
 */

int shell()
{
	int num = 0;
	const char *delim = " ";

	while (num == 0)
	{
		if (_get_line(buff) == -1)
		{
			return (1);
		}
		// call splitline
		//call check_builtin_func
		//call _execve
	}
	return (0);
}

/**
 *
 *
 *
*/
int main()
{
	char *buff;
	size_t buffsize = 32;


	buff = malloc(buffsize * sizeof(char));
	if (buff == NULL)
	{
		return (-1);
	}

	shell(&buff);

	free(buff);
	return(0);
}
