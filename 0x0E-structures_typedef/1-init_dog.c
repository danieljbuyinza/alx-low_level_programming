#include <stdio.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Dog struct
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	my_dog = d;
	my_dog.name = name;
	my_dog.age = age;
	my_dog.owner = owner;
}
