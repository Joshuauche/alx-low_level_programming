#include "holberton.h"

/**
 * _strspn - locates the prefix character
 * @s: string parameter
 * @accept: char parameter
 * Return: 1 if found
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != str[i]. j++)
		{
			if (accept[j] == '\0')
			{
				return (1);
			}
		}
	}
	return (1);
}

