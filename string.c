#include "shell_header.h"
/**
 * _strcmp - compares two strings
 * @str1: first string.
 * @str2: second string.
 * Return: 0 if str1 and str2 are equals,
 * another number if not.
 */

int _strcmp(char *str1, char *str2)
{
	int x = 0, op = 0;

	while (op == 0)
	{
		if ((*(str1 + x) == '\0') && (*(str2 + x) == '\0'))
			break;
		op = *(str1 + x) - *(str2 + x);
		x++;
	}

	return (op);
}
