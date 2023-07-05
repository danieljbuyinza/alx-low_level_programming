#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int i, n1, n2, result;

	num1 = argv[1];
	num2 = argv[2];

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 0; num1[i] != '\0'; i++)
	{
		if (num1[i] < '0' || num1[i] > '9')
		{
			printf("Error\n");
			return (98);
		}
	}

	for (i = 0; num2[i] != '\0'; i++)
	{
		if (num2[i] < '0' || num2[i] > '9')
		{
			printf("Error\n");
			return (98);
		}
	}

	n1 = atoi(num1);
	n2 = atoi(num2);

	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}

