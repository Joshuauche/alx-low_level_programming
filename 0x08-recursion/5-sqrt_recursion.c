#include "holberton.h"

int check_squareroot(int n, int i);

/**
 * _sqrt_recursion - prints the squareroot of a number
 * @n: only parameter
 * Return: the squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (check_squareroot(n, 0));
}

/**
 * check_squareroot - checks if its a square root of a natural number
 * @n: first parameter
 * @i: second parameter
 * Return: ckecked natural number
 */
int check_squareroot(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}


	if (i * i == n)
	{
		return (i);
	}

	return (check_squareroot(n, i + 1));
}

