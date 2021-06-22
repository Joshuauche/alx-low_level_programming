#include "holberton.h"

/**
 * _isalpha - prints if alphabets upper and lower case
 * @c: only operand
 * Return: 1 if alphabet and 0 if number
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

