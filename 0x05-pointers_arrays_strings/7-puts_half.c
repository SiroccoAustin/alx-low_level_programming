#include "main.h"
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

	char first[100];

	char second[100];

	int i = 0;

	int j = index;

	if (index < length)
	{
	while (i < index)
	{
	first = str[i];
	i++;
	}
	first[index] = '\0';
	}
	while (j < length)
	{
	second[j - index] = str[j];
	}
	puts(second);
}
