#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program that multiplies two numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int result;

	(void)argc;
	if (argv[1] == "" || argv[2] == "")
	{
		printf("%s\n", "Error");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);

	return (0);
}

