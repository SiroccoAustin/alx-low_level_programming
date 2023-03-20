#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	printf("Name:%d\n", 0);
	}
	else
	{
	printf("Name: %s\n", d->name);
	printf("Age: %2f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
