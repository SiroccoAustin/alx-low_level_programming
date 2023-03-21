#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print struct
 * @d: struct argument
 * Return: print struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	printf("%d\n", 0);
	}
	if (d->name == NULL)
	{
	printf("Name:%d", 0);
	}
	else
	{
	printf("Name: %s\n", d->name);
	printf("Age: %2f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
