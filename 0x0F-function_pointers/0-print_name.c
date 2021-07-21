#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name argument
 * @f: function pointer argument
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

