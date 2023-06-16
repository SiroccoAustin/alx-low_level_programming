#include "main.h"

/**
 * _calloc - allocate memory
 * @nmemb: number of elements
 * @size: size of element
 * Return: allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;

	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	while (i < (nmemb + size))
	{
		*((char *)(ptr) + i) = 0;
		i++;
	}

	return (ptr);
}
