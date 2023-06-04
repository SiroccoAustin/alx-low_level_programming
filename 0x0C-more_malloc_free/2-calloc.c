#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: byte size
 * Return: pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*unsigned int i = ;*/

	char *t;

	/*void *ptr;*/

	t = malloc(size * nmemb);

	if (t == NULL)
	{
		return (NULL);
	}

	if (nmemb == 0 || size == 0)
		return (NULL);

	memset(t, 0, size);
	return (t);
}
