#ifndef HOLBERTON_H
#define HOLBERTON_H


#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/*0. function that reads a text file and prints it to the POSIX.*/
ssize_t read_textfile(const char *filename, size_t letters);

/*1. creates a fuction that creates a file*/
int create_file(const char *filename, char *text_content);

/*2. appends text at the end of a file*/
int append_text_to_file(const char *filename, char *text_content);



#endif


