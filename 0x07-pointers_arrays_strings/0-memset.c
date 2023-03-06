# include "main.h"
# include <string.h>
# include <stdio.h>

/**
 * _memset - outputs new set string
 * @s: pointer to the origin set of memory
 * @b: value to be set
 * @n: number of bytes to be set
 * Return: a new set string
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
