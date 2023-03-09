#include <stdio.h>
#include "main.h"

/**
 * powers - Function that calculates the powers
 * @x: Integer
 * @y: Power
 * Return: int
*/
int powers(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * powers(x, (y - 1)));
}

/**
 * _pow_recursion - Function that calls the powers function
 * @x: First argument
 * @y: Second argument
 * Return: int
*/
int _pow_recursion(int x, int y)
{
	return (powers(x, y));
}
