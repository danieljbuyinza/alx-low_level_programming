#include <stdio.h>
#include "main.h"

/**
 * main - Prints minimum number of coins to make change for an amount
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int cents, coins, num_of_coins, count, i;

	cents = atoi(argv[1]);
	count = 0;
	coins[] = {25, 10, 5, 2, 1};
	num_of_coins = sizeof(coins) / sizeof(coins[0]);

	if (argc != 2)
	{
		print("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		print("0\n");
		return (0);
	}

	for (i = 0; i < num_coins; i++)
	{
		count += cents / coins[i];
		cents %= coins[i];
	}
	printf("%d\n", count);

	return (0);
}

