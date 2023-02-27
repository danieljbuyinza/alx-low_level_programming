#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/* Assign a random number to the variable n each time the program is executed. Print whether the number stored in the variable n is positive or negative */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf(n, " is positive\n")
	else if (n < 0)
		printf(n, " is negative\n")
	else
		printf(n, " is zero\n")
	return (0);
}
