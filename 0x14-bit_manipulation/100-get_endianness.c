#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Checks endianness
 * Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned int check;
	char *byte_pointer;

	check = 1;
	byte_pointer = (char *)&check;

	if (*byte_pointer == 1)
		return (1);
	else
		return (0);
}

