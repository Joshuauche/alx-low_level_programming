#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - searches the string for any set of bytes
 * @s: first parameter
 * @accept: second parameter
 * Return: the string when executed
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, pos, flag = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		pos = i;
	}
	for (i = 0; accept[i] != ' '; i++)
	{
		for (j = 0; s[j] != ' '; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= pos)
				{
					pos = j;
					flag = 1;
				}
			}
		}
	}
	if (flag == 1)
	{
		return (&s[pos]);
	}
	else
	{
		return (NULL);
	}
}

