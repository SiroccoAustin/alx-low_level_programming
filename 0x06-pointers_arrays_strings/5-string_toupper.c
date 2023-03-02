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
	for (int i = 0; temp != '\0'; i++)
	{
	if (temp[i] >= 'a' && temp[i] <= 'z')
	{
	temp[i] = temp[i] - 32;
	}
	}
}
