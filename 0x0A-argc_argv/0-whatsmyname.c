#include <stdio.h>
#include <string.h>

/**
 * main - Prints the program's name
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	const char *program;
	const char *lastSlash = strrchr(program, '/');

	*program = argv[0];

	if (lastSlash != NULL)
		program = lastSlash + 1;

	_putchar(program);
	_putchar('\n');

	return (0);
}

