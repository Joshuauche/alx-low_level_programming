#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - converts every string to uppercase
 * @s: string parameter
 * Return: capitalize string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; i < strlen(s); i++)
	{
		if ((i == 0 || s[i - 1] == ' ' || s[i - 1] == ',' || s[i - 1] == '}' || s[i - 1] == '{' || s[i - 1] == ';' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '"' || s[i - 1] == '\t' || s[i - 1] == '\n' || s[i - 1] == '.' || s[i - 1] == '!') && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - ('a' - 'A');
		}
	}
	return (s);
}

