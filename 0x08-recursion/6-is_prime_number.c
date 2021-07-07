#include "holberton.h"

int checked_prime(int n, int i);

/**
 * is_prime_number - prints if an integer is prime or not
 * @n: number parameter
 *
 * Return: 1 if its a prime number, 0 if its not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checked_prime(n, n - 1));
}


/**
 * checked_prime - checks if the number is a prime number
 * @n: number parameter
 * @i: iterator parameter
 *
 * Return: 1 if it is a prime or 0 if its not
 */
int checked_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (checked_prime(n, i - 1));
}
