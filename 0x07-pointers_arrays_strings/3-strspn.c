#include "main.h"
#include <string.h>

/**
 * _strspn - scan for number of similar characters
 * @s: pointer to the first string
 * @accept: pointer to the second string
 * Return: number of simmilarities
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
