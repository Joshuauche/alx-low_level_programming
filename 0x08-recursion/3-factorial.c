#include "holberton.h"
/**
 * factorial - prints the factorial of numbers
 * @n: number parameter
 * Return: 1 when successfully exeuted
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0 && n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

