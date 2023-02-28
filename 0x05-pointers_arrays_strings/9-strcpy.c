#include "main.h"

/**
 * strncpy - copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: copied value to dst
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
