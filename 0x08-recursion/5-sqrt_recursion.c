#include "main.h"

/**
 * engine - Checks if answer from division is the root
 * @n: Given number
 * @potential: Division result
 *
 * Return: int
*/

int engine(int n, int potential)
{
	if ((potential * potential) == n)
		return (potential);
	else
		return (engine(n, potential - 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Given number
 *
 * Return: int
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (engine(n, n / 2));
}

