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
	size_t i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	concatenated = malloc(sizeof(char) * ((strlen(s1) + strlen(s2)) + 1));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		concatenated[i] = s1[i];
	}
	for (i = 0; i < strlen(concatenated); i++)
	{
		concatenated[strlen(s1) + i] = s2[i];
	}

	return (concatenated);
}

