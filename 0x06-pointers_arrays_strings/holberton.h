#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);

/*0. strcat*/
char *_strcat(char *dest, char *src);

/*1. strncat*/
char *_strncat(char *dest, char *src, int n);

/*2 strcopy*/
char *_strncpy(char *dest, char *src, int n);

/*3 strcmp*/
int _strcmp(char *s1, char *s2);

/*4 reverse array*/
void reverse_array(int *a, int n);

/*lowercase letter to uppercase letter*/
char *string_toupper(char *a);

/*6 converts each first string to uppercase*/
char *cap_string(char *s);

/*7 encode a strings*/
char *leet(char *s);

/*encide a string using rot13*/
char *rot13(char *);

/*101 prints an integer*/
void print_number(int n);

















#endif
