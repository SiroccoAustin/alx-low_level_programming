#include "dog.h"

/**
 * init_dog - initialize struct
 * @d: struct
 * @name: name of dog
 * @age: age of dog
 * @owner: of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
