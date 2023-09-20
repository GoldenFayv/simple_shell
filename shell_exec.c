#include "shell_header.h"

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
		char *args[] = {(char *)cmd, NULL};

		if (execve(cmd, args, NULL) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
		wait(NULL);
}
