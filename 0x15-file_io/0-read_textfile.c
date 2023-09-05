#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output
 * @filename: Given file name
 * @letters: Number of letters it should read and print
 * Return: Actual number of letter it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *allocated_space;
	ssize_t text_read, text_written;

	if (filename == NULL)
		return (0);

	FILE file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	allocated_space = (char *)maloc(letters);

	if (allocated_space == NULL)
	{
		fclose(file);
		return (0);
	}

	text_read = fread(allocated_space, sizeof(char), letters, file);
	if (text_read <= 0)
	{
		free(allocated_space);
		fclose(file);
		return (0);
	}

	text_written = write(STDOUT_FILENO, allocated_space, text_read);
	if (text_written != text_read)
	{
		free(allocated_space);
		fclose(file);
		return (0);
	}

	free(allocated_space);
	fclose(file);

	return (text_written);
}

