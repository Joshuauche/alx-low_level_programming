#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all integer parameter
 * @n: number parameter
 * Return: sum of the integers
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list arg;
	unsigned int i, sum;

	sum = 0;

	va_start(arg, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(arg, int);
		}
	}
	va_end(arg);

	return (sum);
}

