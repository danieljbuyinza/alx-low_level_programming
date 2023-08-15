#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Describing a dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Description: Information about a dog, including its name,
 * age, and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

