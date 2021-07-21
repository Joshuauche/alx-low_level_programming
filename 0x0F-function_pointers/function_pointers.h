#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H


int _putchar(char c);

/*0*/
void print_name(char *name, void (*f)(char *));

/*1.*/
void array_iterator(int *array, size_t size, void (*action)(int));










#endif
