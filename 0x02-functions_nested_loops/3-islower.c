#include <ctype.h>
#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: First argument
 * Return: 1
*/
int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	else
		return (0);
}
