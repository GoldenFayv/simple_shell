#ifndef SHELL_H
#define SHELL_H

extern char **environ;
#define MAX_COMMAND_LENGTH 1024

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

void output(const char *output_msg);
void unveil_prompt(void);
void read_input_cmd(char **cmd, size_t *length);
void implement_cmd(const char *cmd);
void parse_cmd(char *cmd, char **args);
void show_env(void);
int _strcmp(char *str1, char *str2);
#endif
