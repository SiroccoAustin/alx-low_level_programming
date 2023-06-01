#include "main.h"

/**
 * malloc_checked - alloctes memory
 * @b: size of memry to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
