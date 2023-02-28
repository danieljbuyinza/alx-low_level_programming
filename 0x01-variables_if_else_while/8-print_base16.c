#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
*/
int main(void)
{
	char c, x = 'a', counter = 0;

	for (c = 0; c < 16; c++)
	{
		if (c >= 10)
		{
			while (counter < (16 % 10))
			{
				putchar(x);
				x++;
				counter++;
			}
		} else
		{
			putchar('0' + c);
		}
	}
	putchar('\n');
	return (0);
}
