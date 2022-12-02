#include <stdio.h>
#include <stdlib.h>
#include "shell.h"

int main()
{
	char *buffer;

	buffer = malloc(sizeof(*buffer) * 32);
	
	_get_line(buffer);
	printf("%s", buffer);
}
