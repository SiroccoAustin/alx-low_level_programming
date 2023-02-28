#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * rev_string - returns a reversed string
 * @s: pointer to a string
 * Return: a reversed string
 */

void rev_string(char *s)
{
	int length = strlen(s);

	int middle = length / 2;

	char temp;

	int i = 0;

	while (i < middle)
	{
	temp = s[i];
	s[i] = s[length - i - 1];
	s[length - i - 1] = temp;
	i++;
	}
}
