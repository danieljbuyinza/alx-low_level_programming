#include <stdio.h>
#include "main.h"

/**
 * main - Multiplies two numbers
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int result, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = argv[1];
	n2 = argv[2];

	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}
