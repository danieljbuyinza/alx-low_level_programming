#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints minimum number of coins to make change for an amount
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int num, i, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[i];
		}
	}

	printf("%d\n", result);
	return (0);
}


