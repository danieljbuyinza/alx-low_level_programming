#include "main.h"

/**
 * engine - Checks if number is a prime number
 * @n: Given number
 * @divisor: Divisor
 *
 * Return: int
*/

int engine(int n, int divisor)
{
	if (divisor == n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (engine(n, divisor + 1));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number
 * @n: Given number
 *
 * Return: int
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (engine(n, 2));
}
