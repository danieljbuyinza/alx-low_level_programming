#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads text file and prints it to POSIX standard output
 * @filename: Name of given file
 * @letters: Number of letters it should read and print
 * Return: Actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	ssize_t text_read, text_written;
	char buffer[letters];

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	text_read = fread(buffer, sizeof(char), 1, file);
	while (text_read > 0 && letters > 0)
	{
		text_written = write(STDOUT_FILENO, buffer, text_read);
		if (text_written != text_read)
		{
			fclose(file);
			return (0);
		}

		letters--;
		text_read = fread(buffer, sizeof(char), 1, file);
	}

	fclose(file);
	return (text_read);
}

