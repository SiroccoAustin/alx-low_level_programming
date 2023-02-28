#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - print a reversed string
 * @s: pointer pointing to the string
 * Return: a reversed string
 */

void print_rev(char *s)
{

	int c = 0;
	
	while (s[c] != '\0')
	{
	c++
	};

	for (c -= 1; c >= 0; c--)
	{
	_putchar(s[c]);
	}
	_putchar('\n');
}
