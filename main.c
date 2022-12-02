#include <stdio.h>
#include <stdlib.h>
#include "shell.h"

int shell()
{
	int num = 0;
	char *buff;
	size_t buffsize;

	buffsize = 32;
	buff = malloc(buffsize * sizeof(char));
	if (buff == NULL)
	{
		return (-1);
	}
	while (num == 0)
	{
		;
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
	shell();
	return(0);
}
