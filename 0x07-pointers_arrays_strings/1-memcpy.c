#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memcpy - copies memory to dest
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
