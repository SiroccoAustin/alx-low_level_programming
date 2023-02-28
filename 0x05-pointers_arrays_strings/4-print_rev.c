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

	_putchar(strrev(s) + '0');
}
