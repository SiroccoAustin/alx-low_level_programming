#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * string_toupper - output upppercase characters
 * @str: string to convert to uppercase
 * Return: uppercase characters
 */

char *string_toupper(char *str)
{
	int i = 0; 

	while (str[i])
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] = str[i] - 32;
	i++;
	}
	}
	return (str);
}
