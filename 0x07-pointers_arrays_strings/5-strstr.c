#include "main.h"
#include <string.h>

/**
 * _strstr - it looks for a substring inside a string
 * @haystack: pointer to a string to be scanned
 * @needle: pointer of a substring
 * Return: a substring inside the main string
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
