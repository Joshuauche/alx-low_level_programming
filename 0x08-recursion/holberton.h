#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);

/*0 print a string*/
void _puts_recursion(char *s);

/*1 prints string in reverse*/
void _print_rev_recursion(char *s);

/*2 returns the length of a string*/
int _strlen_recursion(char *s);

/*3 factorial of a given number*/
int factorial(int n);

/*4 prints the raised to the power of a number*/
int _pow_recursion(int x, int y);

/*5 natural squareroot of a number*/
int _sqrt_recursion(int n);
int check_squareroot(int n, int i);

/*6 prime numbers*/
int is_prime_number(int n);
int checked_prime(int n, int i);

/*100 ispalindrome*/
int is_palindrome(char *s);
int check_pal(char *s, int i, int length);
int strlen(char *s);











#endif
