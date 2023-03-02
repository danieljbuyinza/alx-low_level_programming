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

	for (n = length - 1; n >= 0; n--)
		_putchar(s[n]);
}
