#include <string.h>
#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - this concat two strings which amount of strings possible
 * @dest: destination string
 * @src: source string
 * @n: integer
 * Return: destination string when executed successfully
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';

	return (dest);
}
