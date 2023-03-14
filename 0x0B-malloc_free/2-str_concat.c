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

	if (concat == NULL)
	{
	return (NULL);
	}
	if (concat != NULL)
	{
	if (*s1 == NULL)
	{
	*s1 = " ";
	strcpy(concat, s1);
	strcat(concat, s2);
	}
	else if (*s2 == NULL)
	{
	*s2 = " ";
	strcpy(concat, s1);
	strcat(concat, s2);
	}
	else if (s1 && s2 == NULL)
	{
	*s1 = " ";
	*s2 = " ";
	strcpy(concat, s1);
	strcat(concat, s2);
	}
	else
	{
	strcpy(concat, s1);
	strcat(concat, s2);
	}
	}
	return (concat);
	

}
