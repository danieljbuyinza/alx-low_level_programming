#include <stdio.h>
#include "main.h"

/**
 * main - Prints number of arguments passed
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%s\n", argc - 1);

	return (0);
}
