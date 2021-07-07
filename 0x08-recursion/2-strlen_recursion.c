#include "holberton.h"
/**
 * _strlen_recursion -prints the lenth of strings
 * @s: string parameter
 * Return: the length in mumber
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

