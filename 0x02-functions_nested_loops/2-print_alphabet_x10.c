#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times in lowercase
*/
void print_alphabet_x10(void)
{
	char l;
	int counter = 0;

	while (counter < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
		counter++;
	}
}
