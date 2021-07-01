#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * leet - encodes string
 * @s: only parameter
 * Return: converts the characters to numbers
 */
char *leet(char *s)
{
	int i, j, length;

	length = strlen(a);

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0;  s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}

		}
	}
	return (s);
}

