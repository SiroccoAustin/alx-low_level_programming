#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * string_toupper - output upppercase characters
 * of a string provided
 * @str: string to convert to uppercase
 * Return: uppercase characters
 *
 */

char *string_toupper(char *str)
{
	int i = 0;

	int length = strlen(str);

	while (i < length)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] = str[i] - 32;
	i++;
	}
	}
	return (str);
}
