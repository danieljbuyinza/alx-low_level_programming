#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Given integer
 *
 * Return: Newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = malloc(strlen(s1) + (n >= strlen(s2) ? strlen(s2) : n) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < strlen(s2); i++)
	{
		ptr[strlen(s1) + i] = s2[i];
	}

	return (ptr);
}

