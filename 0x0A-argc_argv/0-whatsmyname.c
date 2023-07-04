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

	*program = argv[0];

	_putchar(program);
	_putchar('\n');
}

