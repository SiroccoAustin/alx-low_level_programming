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

	ptr = malloc(sizeof(char) * (strlen(s1) +  n));

	if (ptr == NULL)
	{
	printf("hello world!");
	return (NULL);
	}
	else
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
	return (ptr);
}
