#include <string.h>

/**
 * _strcat - Concatenates two strings
 * @dest: String parameter
 * @src: String parameter
 *
 * Return: char
*/

char *_strcat(char *dest, char *src)
{
	int d, s;

	d = strlen(dest);

	for (s = 0; src[s] != '\0'; s++)
		dest[d + s] = src[s];

	dest[d + s] = '\0';
}
