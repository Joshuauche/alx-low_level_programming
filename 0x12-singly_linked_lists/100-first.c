#include <stdio.h>

/**
 * print_string - executes before the main function
 */
void print_string(void) __attribute__ ((constructor));

void print_string(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

