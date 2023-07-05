#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to concatenated string, or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i, j;
	char *concatenated;

	len1 = 0;
	len2 = 0;
	concatenated = malloc((len1 + len2 + 1) * sizeof(char));

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < len2; j++)
		concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0';

	return (concatenated);
}

