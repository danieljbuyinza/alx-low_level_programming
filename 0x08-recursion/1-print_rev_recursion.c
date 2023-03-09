#include <stdio.h>
#include <publib.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - Function that prints a string in reverse
 * @s: Given string
*/
void _print_rev_recursion(char *s)
{
	printf("%s", strrev(s));
}
