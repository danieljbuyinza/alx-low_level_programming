/**
 * _memset - Fills memory with a constant byte
 * @s: Memory area
 * @b: Constant byte
 * @n: Integer
 *
 * Return: char
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

