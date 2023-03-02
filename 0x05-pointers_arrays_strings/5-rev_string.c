#include <string.h>
#include "main.h"

int _putchar(char);

/**
 * print_rev - Prints a string in reverse
 * @s: First operand
*/
void rev_string(char *s)
{
	int n, length;

	length = strlen(s);

	for (n = 0; n < length; n++)
                _putchar(s[n]);
	_putchar('\n');
	for (n = length - 1; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
