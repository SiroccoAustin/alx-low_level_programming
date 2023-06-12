#include "main.h"

/**
 * create_array - create an array
 * @size: size of an array
 * @c: element
 * Return: return a pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
