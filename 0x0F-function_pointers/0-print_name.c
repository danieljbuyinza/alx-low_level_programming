#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: Given name
 * @f: Pointer
 *
 * Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	_putchar(f(name));
	_putchar("\n");
}
