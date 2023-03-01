#include "main.h"

void print_alphabet()
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}

/**
 * main - Print the alphabet
 * Return: 0
*/
int main(void)
{
	print_alphabet();
	return (0);
}
