#include <stdio.h>
#include <math.h>

/**
 * MaxPrime - returns the largest prime number
 * @num: only parameter
 */
long long MaxPrime(long long num)
{
	long long CurrMaxPrime = -1;

	if (num % 2 == 0)
	{
		CurrMaxPrime = 2;
		while (num % 2 == 0)
		{
			num = num / 2;
		}
	}

	for (long long i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			CurrMaxPrime = i;
			num = num / i;
		}
	}

	if (num > 2)
		CurrMaxPrime = num;


	return (CurrMaxPrime);
}

/**
 * main - prints the largest prime number
 * Return: 0 success
 */
int main(void)
{
	long long z;

	z = 612852475143;
	printf("Largest prime factor of %lld is: %lld\n", z, MaxPrime(z));
	return (0);
}

