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
	int result;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (result);
	}
}
