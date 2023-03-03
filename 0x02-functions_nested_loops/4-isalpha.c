#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: First argument
 * Return: 1
*/
int _isalpha(int c)
{
	if (isalpha(c) > 0)
		return (1);
	else
		return (0);
}
