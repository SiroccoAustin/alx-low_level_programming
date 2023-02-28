#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: pointer pointing to the string
 * Return: a half of a string
 */

void puts_half(char *str)
{
	int index = strlen(str) / 2;

	int length = strlen(str);

	char second[100];

	int j = index;

	if (index < length)
	{
	while (j < length)
	{
	second[j - index] = str[j];
	j++;
	}
	}
	puts(second);
}
