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
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		int result;

		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
}
