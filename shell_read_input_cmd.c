#include "shell_header.h"
/**
* read_input_cmd - Reads in commands as input.
* @cmd: The command read in.
* @length: size of the command read in.
*/
void read_input_cmd(char **cmd, size_t *length)
{
        ssize_t cmd_len = getline(cmd, length, stdin);

        if (cmd_len == -1)
        {
                output("\nExiting the shell.\n");
                exit(EXIT_SUCCESS);
        }

        if (cmd_len > 0 && (*cmd)[cmd_len - 1] == '\n')
                (*cmd)[cmd_len - 1] = '\0';
}
