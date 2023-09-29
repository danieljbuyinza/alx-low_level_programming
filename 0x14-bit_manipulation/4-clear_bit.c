#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at given index
 * @n: Pointer to the number to work on
 * @index: Given index
 * Return: 1 if it worked or -1 if error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	check = 1 << index;
	mask = ~check;
	*n &= check;

	return (1);
}

