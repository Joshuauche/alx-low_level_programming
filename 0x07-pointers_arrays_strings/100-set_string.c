#include "holberton.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: first parameter
 * @to: second parameter
 */
void set_string(char **s, char *to)
{
	*s = to;
}
