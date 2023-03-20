#include "dog.h"

/**
 * init_dog - initializes a struct
 * @d: structure
 * @name: argument
 * @age: age argument
 * @owner: owner argument
 * Return: initalized struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
