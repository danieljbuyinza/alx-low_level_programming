#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: int
*/

int main(int argc, char *argv[])
{
	int m, n, result;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		m = atoi(argv[1]);
		n = atoi(argv[2]);
		result = m * n;
		printf("%d\n", result);
		return (result);
	}
}
