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
	char *ptr;

	int i = 0;

	int n = size * nmemb;

	ptr = malloc(n);

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	if (ptr != NULL)
	{
	while (i < n)
	{
	ptr[i] = 0;
	i++;
	}
	else
	{
	return (NULL);
	}
	}
	return (ptr);
}
