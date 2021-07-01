#include "holberton.h"
#include <string.h>
#include <stdio.h>
/**
 * string_toupper - this converts strings to uppercase
 * @a: the string array
 * Return: converst the string when executed
 */
char *string_toupper(char *a)
{
	int i;
	int lenght = strlen(a);


	for (i = 0; i < lenght; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - ('a' - 'A');
		}

	}

	return (a);
}

