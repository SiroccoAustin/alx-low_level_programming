#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * string_nconcat - outputs a combination of two strings
 * @s1: first argument
 * @s2: second argument
 * @n: third argument
 * Return: a concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	
	if (s1 == NULL)
	{
	s1 = "";
	}
	
	int length = strlen(s1) + strlen(s2);
	ptr = malloc(sizeof(char) * length);

	if (ptr != NULL)
	{
	if (n >= strlen(s2))
	{
	strcpy(ptr, s2);
	}
	else
	{
	strcpy(ptr, s1);
	strncat(ptr, s2, n);
	}
	}
	else
	{
	return (NULL);
	}
	return (ptr);
}
