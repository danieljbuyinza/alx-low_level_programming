#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - Creates file with specified permissions and writes to it
 * @filename: Name of file to create
 * @text_content: NULL-terminated string to write to the file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_length, write_result;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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

