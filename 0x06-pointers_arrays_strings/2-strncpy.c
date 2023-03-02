#include "main.h"
#include <string.h>

/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be copied
 * Return: a copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
