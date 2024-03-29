#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory
 * @d: pointer to struct
 * Return: free memory
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
