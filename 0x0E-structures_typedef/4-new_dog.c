#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - copy string
 * @dest: destination string
 * @src: source string
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * _strlen - calculate length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * new_dog - create new string
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_h;

	int len1 = 0, len2 = 0;

	len1 = _strlen(name) + 1;
	len2 = _strlen(owner) + 1;

	dog_h = malloc(sizeof(char *) * (len1 + len2));

	if (dog_h == NULL)
		return (NULL);
	dog_h->name = malloc(sizeof(char *) * len1);

	dog_h->owner = malloc(sizeof(char *) * len2);

	if (dog_h->name != NULL && dog_h->owner != NULL)
	{
		dog_h->name = _strcpy(dog_h->name, name);
		dog_h->owner = _strcpy(dog_h->owner, owner);
	}
	dog_h->age = age;
	return (dog_h);
}
