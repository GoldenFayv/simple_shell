#include "shell_header.h"
/**
* implement_cmd - Executes a command in a child process
* @cmd: The command to execute
*/
void implement_cmd(const char *cmd)
{
	pid_t child_process_id = fork();

	if (child_process_id == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_process_id == 0)
	{
		char *args[2];
		args[0] = (char *)cmd;
		args[1] = NULL;
		if (execve(cmd, args, NULL) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
		wait(NULL);
}
