#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: string parameter
 * @needle: char parameter
 * Return: the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, len;
	char temp;

	len = strlen(haystack);

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; i < len; i++)
	{
		if (*(haystack + i) == needle)
		{
			temp = strstr(haystack + i + 1, needle + 1);
			return ((temp) ? temp - 1 : NULL);
		}
	}
	return (NULL);
}

