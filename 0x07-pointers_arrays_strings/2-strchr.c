#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strchr - search string for the first occurance of character
 * @s: pointer for the string to scan
 * @c: character to be searched
 * Return: first occurance of character
 */

char *_strchr(char *s, char c)
{

	return (strchr(s, c));
}
