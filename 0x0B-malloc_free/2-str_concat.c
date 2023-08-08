#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the contents of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	concatenated = malloc(sizeof(char) * ((strlen(s1) + 1) + (strlen(s2) + 1)));
	if (concatenated == NULL)
		return (NULL);

	return (concatenated);
}

