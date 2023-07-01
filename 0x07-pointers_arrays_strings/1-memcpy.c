/**
 * _memcpy - Copies memory area
 * @dest: To memory area
 * @src: From memory area
 * @n: Integer
 *
 * Return: char
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

