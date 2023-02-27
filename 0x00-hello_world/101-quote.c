#include <stdio.h>

/* Printing without functions */

/**
 * filedes - File descriptor
 *
 * buf - Pointer to data
 *
 * nbyte - Variable holding integer
 *
 * main - Entry point
 *
 * Return: 1 (Error)
 */
int write(int filedes, const char *buf, unsigned int nbyte);
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
