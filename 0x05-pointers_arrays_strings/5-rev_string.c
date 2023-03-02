#include <string.h>
#include "main.h"

int _putchar(char);

/**
 * rev_string - Prints a string in reverse
 * @s: First operand
*/
void rev_string(char *s)
{
	int n, length, counter;

	length = strlen(s);
	char b[length];
	counter = 10;

	for (n = 0; n < length; n++)
	{
		b[n] = s[counter];
		if (counter >= 0)
			counter--;
	}
	s = b;
}
