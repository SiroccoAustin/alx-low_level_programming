#include "main.h"
#include <string.h>

/**
 * _strpbrk - checks for matching characters
 * @s: pointer for the string to be scanned
 * @accept: pointer for the string
 * Return: matching characters
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
