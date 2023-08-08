#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns pointer to newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: Given string
 *
 * Return: Pointer to the duplicated string
*/
char *_strdup(char *str)
{
	char *the_duplicate;
	int i;

	if (str == NULL)
		return (NULL);

	the_duplicate = malloc(sizeof(char) * strlen(str));
	if (the_duplicate == NULL)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
	{
		the_duplicate[i] = str[i];
	}

	return (the_duplicate);
}

