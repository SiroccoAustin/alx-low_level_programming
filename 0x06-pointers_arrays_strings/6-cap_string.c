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
	int length = strlen(str);

	int i;

	while (i < length)
	{
	if (i == 0)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] -= 32;
	}
	}
	if (str[i] == ' ' ||
	    str[i] == ',' ||
	    str[i] == '?' ||
	    str[i] == ',' ||
	    str[i] == '.' ||
	    str[i] == ';' ||
	    str[i] == '"' ||
	    str[i] == '!' ||
	    str[i] == '(' ||
	    str[i] == ')' ||
	    str[i] == '{' ||
	    str[i] == '}'
	   )
	{
	i++;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] -= 32;
	}
	}
	i++;
	}
}
