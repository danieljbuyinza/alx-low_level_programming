#include "main.h"

/**
 * wildcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: int
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' || *s1 != *s2)
		return (0);
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));

	return (wildcmp(s1 + 1, s2 + 1));
}

