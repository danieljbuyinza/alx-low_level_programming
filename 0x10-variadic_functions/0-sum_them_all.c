#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Number of arguments
 * @...: A variable number of integer arguments
 *
 * Return: int
*/

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	unsigned int i;
	int sum;
	va_list args;

	sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(args, int);

	va_end(args);

	return (sum);
}

