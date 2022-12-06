#include <string.h>
#include "shell.h"

/**
 * split_line - Spliting the line using delimeter
 * @line: string
 * @delim: Delimeter
 * Return: number of tokens, -1 when in error
 */

int split_line(char *line, char *delim, char *argv[])
{
	int argc;
	char *arg;
	char *newline = "\n";

	if (line == NULL || delim == NULL)
	{
		return (-1);
	}

	line = strtok(line, newline);
	arg = strtok(line, delim);

	argc = 0;
	while(arg != NULL)
	{
		argv[argc] = arg;
		argc = argc + 1;
		arg = strtok(NULL, delim);
	}
	argv[argc] = 0;
	return (argc);
}
