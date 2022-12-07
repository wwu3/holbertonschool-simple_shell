#include "shell.h"

/**
 * split_line - Spliting the line using delimeter
 * @line: string
 * @delim: Delimeter
 * Return: number of tokens, -1 when in error
 */

int split_line(char *line, char *argv[])
{
	int i;
	char *arg;
	char *delim= " \t\n\r";

	if (line == NULL)
	{
		return (-1);
	}

	arg = strtok(line, "\n");

	i = 0;
	while(arg != NULL)
	{
		printf("%s", argv[i]);
		argv[i] = arg;
		i = i + 1;
		arg = strtok(NULL, delim);
	}
	free(line);
	return (i);
}
