#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);

/*0 files memory*/
char *_memset(char *s, char b, unsigned int n);

/*1 copies memory area*/
char *_memcpy(char *dest, char *src, unsigned int n);

/*2 locates character in string*/
char *_strchr(char *s, char c);

/*3 gets the length of prefix substring*/
unsigned int _strspn(char *s, char *accept);

/*4 searches a string for any set of bytes*/
char *_strpbrk(char *s, char *accept);

/*5 locates a substring*/
char *_strstr(char *haystack, char *needle);

/*6 chess board*/
void print_chessboard(char (*a)[8]);





#endif
