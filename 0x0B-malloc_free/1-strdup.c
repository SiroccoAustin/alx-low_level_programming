#include "main.h"

/**
 * _strdup - create a string duplicate
 * @str: string to duplicate
 * Return: a pointer to a duplicated string
 */

char *_strdup(char *str)
{
	char *ptr;

	int length = 0, i, l = 0;

	for (i = 0; str[i]; i++)
	{
		length++;
	}

	ptr = malloc(sizeof(char *) * length);

	if (ptr == NULL)
		return (NULL);


	while (l < length)
	{
		ptr[l] = str[l];
		l++;
	}
	return (ptr);
}
