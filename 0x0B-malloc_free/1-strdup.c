#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: Given string
 *
 * Return: char
*/

char *_strdup(char *str)
{
	char *str_copy;

	if (str == NULL)
		return (NULL);

	strcpy(str_copy, str);
	char *str_memory = malloc(strlen(str_copy) + 1);

	if (str_memory == NULL)
		return (NULL);
	return (str_memory);
}
