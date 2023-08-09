#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program that adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

