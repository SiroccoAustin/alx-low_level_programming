#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - structure
 * @name: argument
 * @age: age argument
 * @owner: owner argument
 * Return: new structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *spot_dog;

	int name_l = 0, owner_l = 0;

	if (name != NULL && owner != NULL)
	{
	name_l = strlen(name) + 1;
	owner_l = strlen(owner) + 1;

	spot_dog = malloc(sizeof(char) * (name_l + owner_l));

	if (spot_dog == NULL)
	{
	return (NULL);
	}
	spot_dog->name = malloc(sizeof(char) * name_l);
	if (spot_dog->name == NULL)
	{
	free(spot_dog->name);
	return (NULL);
	}
	spot_dog->owner = malloc(sizeof(char) * owner_l);
	if (spot_dog->owner == NULL)
	{
	free(spot_dog->owner);
	return (NULL);
	}
	spot_dog->name = strcpy(spot_dog->name, name);
	spot_dog->owner = strcpy(spot_dog->owner, owner);
	spot_dog->age = age;
	}
	return (spot_dog);
}
