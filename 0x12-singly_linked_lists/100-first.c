#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * tortoise_challenges_hare - Prints message before main function
*/
void tortoise_challenges_hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	print("I bore my house upon my back!\n");
}

