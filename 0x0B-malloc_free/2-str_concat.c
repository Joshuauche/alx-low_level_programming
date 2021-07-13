#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * str_concat - concatenates two strings
 * @s1: first string parameter
 * @s2: second string parameter
 *
 * Return: the pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *result = malloc(strlen(s1) + strlen(s2) + 1);

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}

