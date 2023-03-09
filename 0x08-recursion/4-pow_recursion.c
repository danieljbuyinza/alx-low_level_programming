#include <stdio.h>
#include "main.h"

int powers(int x, int y)
{
	if (y <= 0)
		return (-1);
	if (y == 1)
		return (x);
	return (x * powers(x, (y - 1)));
}

/**
 * _pow_recursion - Function that returns the value of x raised to the power of y
 * @x: First argument
 * @y: Second argument
*/
int _pow_recursion(int x, int y)
{
	powers(x, y);
}
