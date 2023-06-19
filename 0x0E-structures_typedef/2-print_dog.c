#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print elements
 * @d: struct
 * Return: print elements
 */


void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("%s\n", d->name);
	printf("%f\n", d->age);
	printf("%s\n", d->owner);
}
