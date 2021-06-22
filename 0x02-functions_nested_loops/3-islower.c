#include "holberton.h"

/**
 * _islower - checks to see if it lowercase or uppercase
 * @c: only operand
 * Description: prints 0 if uppercase and 1 if lowercase
 * Return: 0 executed successfully
 */



int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

