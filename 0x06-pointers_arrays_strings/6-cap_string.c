#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - capitalize small letters
 * @str: a string to be capitalized
 * Return: a capitalized string
 */

char *cap_string(char *str)
{
	int i;

	int length = strlen(str);

	for (i = 0; i < length; i++)
	{
	if (i == 0)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] -= 32;
	continue;
	}
	}
	if (str[i] == 32)
	{
	i++;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] -= 32;
	continue;
	}
	}
	else
	{
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
	str[i] += 32;
	}
	}
	}
}