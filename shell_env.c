#include "shell_header.h"
/**
 * show_env - prints current environment.
 */
void show_env(void)
{
	int x;

	for (x = 0; environ[x] != NULL; x++)
	{
		output(environ[x]);
		output("\n");
	}
}
