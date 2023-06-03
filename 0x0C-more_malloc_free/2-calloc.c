#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: byte size
 * Return: pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;

	void *ptr;

	char *arr;

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	if (nmemb == 0 || size == 0)
		return (NULL);
	while (i < nmemb)
	{
		arr[i] = 0;
		i++;
	}
	ptr = arr;
	return (ptr);
}
