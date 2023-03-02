#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * string_toupper - output upppercase characters
 * @temp: temporary argument
 * Return: uppercase characters
 */

char *string_toupper(char *temp)
{
	int i = 0; 

	while (temp[i])
	{
	if (temp[i] >= 'a' && temp[i] <= 'z')
	{
	temp[i] = temp[i] - 32;
	i++;
	}
	}
}
