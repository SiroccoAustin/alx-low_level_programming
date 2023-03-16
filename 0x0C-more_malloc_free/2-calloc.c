#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocate memory
 * @nmemb: first argument
 * @size: second argument
 * Return: allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	unsigned int i = 0;
	
	ptr = &nmemb;

	ptr = calloc(sizeof(int), size);

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	else
	{
	while (i < size)
	{
	*(ptr + i) = nmemb;
	i++;
	}
	}

	return (ptr);
}
