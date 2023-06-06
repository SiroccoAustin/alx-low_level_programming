#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: byte size
 * Return: pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int len = size * nmemb;

	void *t;

	t = malloc(len);

	if (t == NULL)
	{
		return (NULL);
	}

	if (nmemb == 0 || size == 0)
		return (NULL);

	memset((char *)(t), 0, len);
	return (t);
}
