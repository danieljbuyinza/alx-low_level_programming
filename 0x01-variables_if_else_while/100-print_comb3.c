#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
*/
int main(void)
{
	int a, b;
	
	while (a < 10)
	{
		for (b = 1; b < 10; b++)
		{
			if (a != b)
			{
				if (a < b)
				{
					if (b < 10)
						putchar('0' + a);
					putchar('0' + b);
					putchar(',');
					putchar(' ');
				}
			}
		}
		a++;
	}
	
	return (0);
}
