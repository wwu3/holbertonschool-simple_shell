#include "shell.h"

/**
 * _get_line - input from users
 *
 * @buffer: a pointer to char
 * return: if return -1, it's eof
 */
char *_get_line()
{
	int val;
	char *line = NULL;
      	size_t buff = 0;

	putchar('$');
	putchar(' ');
	getline(&line, &buff, stdin);
	return (line);

}

/**
 * _strlen - returns the length of a string
 * @s: a string to measure
 * @
 * Return: void
 */
unsigned int _strlen(char *s)
{
	unsigned int c;

	c = 0;
	if (*s != '\0')
	{
		c = 1 + _strlen(s + 1);
		return (c);
	}
	else
	{
		return (0);
	}

}
