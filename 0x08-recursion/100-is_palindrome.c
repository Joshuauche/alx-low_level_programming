#include "holberton.h"


int strlen_recursion(char *s);
int check_pal(char *s, int i, int length);

/**
 * is_palindrome - prints the value if palidrome or not
 * @s: string parameter
 *
 * Return: 1 if the string is palindrome, 0 if its not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return (check_pal(s, 0, strlen_recursion(s)));

}

/**
 * strlen_recursion - checks for the length of the string
 * @s: string parameter
 *
 * Return: the length of the string
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (strlen_recursion(s + 1));
}

/**
 * check_pal - checks if the string is a palindrome
 * @s: string parameter
 * @i: iterator parameter
 * @length: length of string paramter
 *
 * Return: i if string is palindrome, 0 if not
 */
int check_pal(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (check_pal(s, i + 1, length - 1));
}

