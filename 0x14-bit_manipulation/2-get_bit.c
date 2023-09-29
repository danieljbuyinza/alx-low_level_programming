#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns value of a bit at given index
 * @n: Given number
 * @index: Given index
 * Return: Value of the bit at the given index or -1 if error occurs
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	check = 1 << index;

	if ((n & check) == check)
		return (1);
	else
		return (0);
}

