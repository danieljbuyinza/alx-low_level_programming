#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Given file name
 * @text_content: String to write to the file
 * Return: int
*/

int create_file(const char *filename, char *text_content)
{
	int file_creation;
	ssize_t text_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		file_creation = fopen(filename, "w");
		fclose(file);
	}

	file_creation = open(filename, 0_CREAT | 0_WRONLY | 0_TRUNC);
	text_written = write(file_creation, text_content, strlen(text_content));

	if (file_creation == NULL)
		return (-1);

	close(file_creation);

	return (1);
}

