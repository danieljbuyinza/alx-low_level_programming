#include <string.h>
#include "main.h"

int _putchar(char);

/**
 * rev_string - Prints a string in reverse
 * @s: First operand
*/
void rev_string(char *s)
{
	int n, length;

	length = strlen(s);

	for (n = length - 1; n >= 0; n--)
		strncat(s, &s[n], 1);
	_putchar('\n');
}
