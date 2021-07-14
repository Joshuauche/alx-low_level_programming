#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - length of a string
 * @str: str parameter
 * Return: length of a string
 */
int _strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * argstostr - concatenate all args together
 * @ac: number of args
 * @av: arr of args
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int length, i, j, k;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;
	for (i = 0; i < ac; i++)
	{
		length = length + _strlen(av[i]) + 1;
	}
	str = malloc(sizeof(char) * length + 1);

	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
	}
	str[k] = '\0';

	return (str);
}

