#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number
 * Return: 1
*/
int print_last_digit(int n)
{
	int x = abs(n);

	if (n < 10)
		return (n);
	else if (n >= 10) {
		return (n % 10);
	}
}
