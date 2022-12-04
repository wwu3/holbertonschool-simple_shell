#include <stdio.h>
#include "shell.h"

/**
 * _get_line - input from users
 *
 * @buffer: a pointer to char
 * return: if return -1, it's eof
 */
int _get_line(char *buffer)
{
	size_t size = 32;
	size_t *psize = &size;
	return getline(&buffer, psize, stdin);
}
