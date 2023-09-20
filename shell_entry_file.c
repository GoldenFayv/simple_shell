#include "shell_header.h"
#include <stdbool.h>

/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char *cmd = NULL;
	size_t length = 0;

	for (;;)
	{
		unveil_prompt();
		read_input_cmd(&cmd, &length);
		if (_strcmp(cmd, "exit") == 0)
		{
			break;
		}
		else if (_strcmp(cmd, "env") == 0)
		{
			show_env();
			continue;
		}
		implement_cmd(cmd);
	}
	free(cmd);
	return (0);
}
