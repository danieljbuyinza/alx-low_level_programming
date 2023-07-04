#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiplies two numbers
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);

	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}
