#include <stdio.h>
#include "main.h"

/**
 * set_bit - Sets the value of bit to 1 at given index
 * @n: Pointer to the number to work on
 * @index: Given index
 * Return: 1 if it worked or -1 if error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int check = 1 << index;
	*n |= check;

	return (1);
}

