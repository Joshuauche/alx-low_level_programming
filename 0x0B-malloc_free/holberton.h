#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);

/*0 creates an array of char and initializes with a specific char*/
char *create_array(unsigned int size, char c);

/*1. returns a pointer to a new allocated mememory*/
char *_strdup(char *str);

/*2. concatenates two strings*/
char *str_concat(char *s1, char *s2);

/*3 two dimensional array*/
int **alloc_grid(int width, int height);

/*4 frees 2 dimensional grid memory*/
void free_grid(int **grid, int height);






#endif
