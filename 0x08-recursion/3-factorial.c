#include <stdio.h>
#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number
 * @s: Given number
 * Return: int
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return n * (n - 1);
}
