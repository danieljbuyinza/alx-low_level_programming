#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number
 * Return: 1
*/
int print_last_digit(int n)
{
	int x = abs(n);

	if (x < 10)
	{
		_putchar(x);
		return (x);
	}
	else
	{
		_putchar(x % 10);
		return (x % 10);
	}
}
