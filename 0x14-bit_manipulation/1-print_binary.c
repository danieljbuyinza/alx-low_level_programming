#include "main.h"

/**
 * print_binary - Prints binary representation of a number
 * @n: Given number
 * Return: The binary representation
*/

void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
		_putchar(n);

	if (num > 1)
		print_binary(num / 2);

	_putchar(num % 2);
	_putchar("\n");
}

