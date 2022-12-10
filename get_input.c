#include "shell.h"

/**
 * _get_line - input from users
 * Return: Pointer to char
 */
char *_get_line()
{
	char *line = NULL;
	size_t buff = 0;
	int check;

	check = getline(&line, &buff, stdin);
	if (check == -1)
	{
		free(line);
		return (NULL);
	}
	return (line);

}

/**
 * _strlen - returns the length of a string
 * @s: a string to measure
 * Return: 0 if fails
 */
int _strlen(char *s)
{
	int c;

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
