#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"


/**
 * create_file - function that creates a file
 * @filename: filename parameter
 * @text_content: textcontent parameter
 *
 * Return: 1 if successful
 */
int create_file(const char *filename, char *text_content)
{
	int fd_open, fd_write, count;


	count = 0;
	fd_open = open(filename, O_RDWR | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);


	if (fd_open < 0)
	{
		return (-1);
	}
	if (filename == NULL)
	{
		return (-1);
	}


	if (text_content)
	{
		while (*(text_content + count))
		{
			count++;
		}
		fd_write = write(fd_open, text_content, count);

		if (fd_write != count)
		{
			return (-1);
		}
	}

	close(fd_open);
	return (1);
}

