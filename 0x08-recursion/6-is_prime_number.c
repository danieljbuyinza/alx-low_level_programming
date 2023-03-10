#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - Function that returns 1 if input integer is prime number
 * @n: Given number
 * Return: int
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (n % is_prime_number(n - 1) == 0 ? 1 : 0);
}
