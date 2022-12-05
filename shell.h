#ifndef _SHELL_H_
#define _SHELL_H_

int shell();
int _get_line(char *buffer);
int split_line(char *line, char *delim, char *argv[]);

#endif /* _SHELL_H_ */

