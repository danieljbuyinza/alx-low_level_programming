#include <string.h>
#include <stdlib.h>
#include "main.h"

int _putchar(char);

/**
 * rev_string - Prints a string in reverse
 * @s: First operand
*/
void rev_string(char *s)
{
	int n, length, counter, *ptr;
	char *b;

	length = strlen(s);
	b = malloc(length * sizeof(char));
	counter = 10;

	for (n = 0; n < length; n++)
	{
		b[n] = s[counter];
		if (counter >= 0)
			counter--;
	}

	*ptr = &s;
	*ptr = b;
}
