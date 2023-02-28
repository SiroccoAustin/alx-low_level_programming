#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every character of the string
 * @str: pointer pointing to a string
 * Returns: every character of the string
 */

void puts2(char *str)
{
	int length = strlen(str);

	int i = 0;

	while (i < length)
	{
	_putchar(str[i]);
	i += 2;
	}
	_putchar('\n');
}
