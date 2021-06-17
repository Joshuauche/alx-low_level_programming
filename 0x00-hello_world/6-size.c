#include <stdio.h>

/**
 * main - this prints the sizeof of all data types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("int size: %lu byte(s)\n", sizeof(int));
	printf("size of long int: %lu byte(s)\n", sizeof(long int));
	printf("size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}

