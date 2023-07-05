#include <stdlib.h>

/**
 * _strdup - Returns pointer to newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: Given string
 * Return: Pointer to the duplicated string
*/
char *_strdup(char *str)
{
	unsigned int length, i;
	char *duplicate;

	length = 0;
	duplicate = malloc((length + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplicate[i] = str[i];

	duplicate[i] = '\0';

	return (duplicate);
}

