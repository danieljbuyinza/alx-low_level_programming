#include "main.h"

/**
 * print_binary - Prints binary representation of a number
 * @n: Given number
 * Return: The binary representation
*/

void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
		_putchar('0' + n);

	if (n > 1)
		print_binary(n / 2);

	_putchar('0' + n % 2);
	_putchar('\n');
}

