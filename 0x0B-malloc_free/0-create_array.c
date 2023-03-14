#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array
 * @size: size of an array
 * @c: character argument
 * Return: an array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *p = &c;

	p = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
	return (NULL);
	}

	while (i < size)
	{
	*(p + i) = c;
	i++;
	}
	return (p);
}
