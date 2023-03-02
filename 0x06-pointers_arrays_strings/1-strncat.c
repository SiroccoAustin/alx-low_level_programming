#include "main.h"

/**
 * _strncat - return a combination of strings
 * @dest: pointer pointing to the string
 * @src: pointer pointing to a string
 * @n: number of charcters to be combined
 * Return: a combination of strings
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
