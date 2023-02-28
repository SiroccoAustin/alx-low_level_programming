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

	int n = strlen(s);

	for (int i = 0; i < n; i++)
	{
	char ch = s[i];

	s[i] = s[n - i - 1];
	s[n - i - 1] = ch;
	puts(ch);
	}
}
