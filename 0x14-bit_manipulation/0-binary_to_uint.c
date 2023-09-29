#include <unistd.h>
#include "main.h"

/**
 * binary_to_uint - Converts binary number to an unsigned int
 * @b: Pointer to string of 0 and 1 chars
 * Return: The converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == NULL)
		return (0);

	result = 0;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) + (*b - '0');

		b++;
	}

	return (result);
}

