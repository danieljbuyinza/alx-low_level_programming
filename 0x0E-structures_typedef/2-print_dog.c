#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: Dog struct
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d.name)
			printf("Name: %s\n", d.name);
		else
			printf("Name: (nil)\n");

		if (d.age)
			printf("Age: %s\n", d.age);
		else
			printf("(nil)");

		if (d.owner)
			printf("Owner: %s\n", d.owner);
		else
			printf("(nil)");
	}
	else
		printf("\n");

}
