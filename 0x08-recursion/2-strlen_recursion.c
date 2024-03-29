#include "main.h"

/**
 * _strlen_recursion - Returns the length of the string
 * @s: Given string
 *
 * Return: int
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

