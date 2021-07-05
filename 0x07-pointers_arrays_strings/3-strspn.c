#include "holberton.h"

/**
 * _strspn - locates the prefix character
 * @s: string parameter
 * @accept: char parameter
 * Return: 1 if found
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
			b++;
		}
		a++;
	}
	return (t);
}

