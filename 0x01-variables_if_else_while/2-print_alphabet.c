#include <stdio.h>

/*
 * main - Entry point
 * Return: 0
*/
int main(void)
{
	for (char ch = 'a', ch <= 'z'; ch++) {
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
