#include "shell_header.h"
/**
* parse_cmd - Parses a command string into arguments.
* @cmd: The command string to parse.
* @args: An array of strings to store the arguments.
*/

void parse_cmd(char *cmd, char **args)
{
	char *token = strtok(cmd, " \t\n:");
	int x = 0;

	while (token != NULL)
	{
		args[x] = token;
		token = strtok(NULL, " \t\n:");
		x++;
	}
	args[x] = NULL;
}
