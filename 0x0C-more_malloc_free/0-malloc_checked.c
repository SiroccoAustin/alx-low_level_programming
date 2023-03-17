#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - outputs pointer address
 * @b: argument
 * Return: pointer address
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
	{
	exit(98);
	}
	return (ptr);
}
