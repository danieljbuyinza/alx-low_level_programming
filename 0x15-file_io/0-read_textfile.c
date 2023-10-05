#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads text file and prints it to POSIX standard output
 * @filename: Name of the given file
 * @letters: Number of letters it should read and print
 * Return: Actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t text_read, text_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	text_read = read(file_descriptor, buffer, letters);
	if (text_read == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	text_written = write(STDOUT_FILENO, buffer, text_read);
	if (text_written != text_read)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	close(file_descriptor);
	free(buffer);
	return (text_read);
}

