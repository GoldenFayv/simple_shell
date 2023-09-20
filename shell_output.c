#include "shell_header.h"
/**
* output - displays to the standard output.
* @output_msg: to be displayed
*/
void output(const char *output_msg)
{
        write(STDOUT_FILENO, output_msg, strlen(output_msg));
        fflush(stdout);
}
