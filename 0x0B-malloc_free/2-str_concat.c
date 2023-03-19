#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - outputs a combination of two strings
 * @s1: first argument
 * @s2: second argument
 * Return: a combination of two strings
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;

	concat = (char *)malloc(sizeof(char) * 12);

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	if (s1 == NULL || s2 == NULL)
	{
	s1 = "";
	s2 = "";
	}
	if (concat != NULL)
	{
	strcpy(concat, s1);
	strcat(concat, s2);
	}
	else
	{
	return (NULL);
	}
	return (concat);
}
