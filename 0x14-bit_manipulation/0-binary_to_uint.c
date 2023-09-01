#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: String of 0 and 1 chars
 * Return: The converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n, i, decimal, base, remainder;

	decimal = 0;
	base = 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	n = atoi(b);

	while (n > 0)
	{
		remainder = n % 10;
		decimal = decimal + remainder * base;
		n = n / 10;
		base = base * 2;
	}

	return (decimal);
}

