#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/*0. returns the sum of all its parameters*/
int sum_them_all(const unsigned int n, ...);

/*1. print the numbers with separator*/
void print_numbers(const char *separator, const unsigned int n, ...);

/*2. prints strings followed by anew line*/
void print_strings(const char *separator, const unsigned int n, ...);










#endif
