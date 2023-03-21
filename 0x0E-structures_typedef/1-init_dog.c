#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Dog struct
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
