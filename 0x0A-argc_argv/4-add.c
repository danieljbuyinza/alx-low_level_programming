#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	int i, j, sum;
	char *input;

	sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			input = argv[i];
			j = 0;

			while (input[j])
			{
				if (!isdigit(input[j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}

			sum += atoi(input);
		}

		printf("%d\n", sum);
	}

	return (0);
}

