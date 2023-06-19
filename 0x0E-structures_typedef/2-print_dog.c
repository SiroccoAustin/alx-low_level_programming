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
		printf("\n");
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	printf("%s\n", d->name);
	printf("%f\n", d->age);
	printf("%s\n", d->owner);
}
