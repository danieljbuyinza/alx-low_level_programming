#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL-terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_result, text_length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_length = 0;
		while (text_content[text_length] != '\0')
			text_length++;
		write_result = write(fd, text_content, text_length);
		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
		if (write_result != text_length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

