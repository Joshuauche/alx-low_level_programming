#include "holberton.h"
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename paramter
 * @letters: letters paramter
 *
 * Return: file_write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_read, file_write;
	int fd_open = open(filename, O_RDONLY);

	if (fd_open < 0)
	{
		return (0);
	}

	if (!filename)
		return (0);
	buffer = (char *) malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	file_read = read(fd_open, buffer, letters);
	if (file_read == 0)
	{
		free(buffer);
		return (0);
	}
	if (file_read == -1)
		return (0);

	buffer[file_read] = '\0';
	close(fd_open);

	file_write = write(STDOUT_FILENO, buffer, file_read);
	if (file_write == 0)
	{
		free(buffer);
		return (0);
	}
	if (file_write == -1)
		return (0);
	free(buffer);
	return (file_write);
}

