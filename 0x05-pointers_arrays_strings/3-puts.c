#include "holberton.h"
#include <stdio.h>
/**
 * _puts - prints the char string to stdout
 * @str: only parameter
 */
void _puts(char *str)
{
	fputs(str, stdout);
	puts("\n");
}

