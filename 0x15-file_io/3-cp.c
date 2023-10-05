#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

int copyFile(const char *source, const char *destination);
int handleError(const char *errorMessage, const char *fileName);
int closeFile(int fd, const char *fileName);

/**
 * main - Copies content from one file to another
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 on success, or exit with appropriate error code on failure
*/
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	result = copyFile(argv[1], argv[2]);

	return (result);
}

/**
 * copyFile - Copies content from one file to another
 * @source: Source file name
 * @d: Destination file name
 * Return: 0 on success, or appropriate error code on failure
 */
int copyFile(const char *source, const char *d)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(source, O_RDONLY);
	if (fd_from == -1)
		return (handleError("Error: Can't read from file", source));

	fd_to = open(d, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		closeFile(fd_from, source);
		return (handleError("Error: Can't write to file", d));
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			closeFile(fd_from, source);
			closeFile(fd_to, d);
			return (handleError("Error: Can't write to file", d));
		}
	}

	if (bytes_read == -1)
	{
		closeFile(fd_from, source);
		closeFile(fd_to, d);
		return (handleError("Error: Can't read from file", source));
	}

	if (closeFile(fd_from, source) == -1 || closeFile(fd_to, d) == -1)
		return (100);

	return (0);
}

/**
 * handleError - Prints an error message to stderr
 * @errorMessage: The error message
 * @fileName: The name of the file associated with the error
 * Return: 98
 */
int handleError(const char *errorMessage, const char *fileName)
{
	dprintf(STDERR_FILENO, "%s %s\n", errorMessage, fileName);
	return (98);
}

/**
 * closeFile - Closes a file descriptor
 * @fd: The file descriptor to close
 * @fileName: The name of the file associated with the descriptor
 * Return: -1 if an error occurs, otherwise 0
 */
int closeFile(int fd, const char *fileName)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d for %s\n", fd, fileName);
		return (-1);
	}
	return (0);
}

