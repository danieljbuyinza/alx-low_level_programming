#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * _pow_recursion - Function that returns the value of x raised to the power of y
 * @x: First argument
 * @y: Second argument
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (pow(x, y));
}
