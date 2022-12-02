#include <stdio.h>
#include "shell.h"

/**
 * _get_line - input from users
 *
 * @buffer: a pointer to char
 * return: nothing
 */
void _get_line(char *buffer)
{
	size_t size = 32;
	size_t *psize = &size;
	getline(&buffer, psize, stdin);
}
