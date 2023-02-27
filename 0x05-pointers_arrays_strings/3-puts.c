#include "main.h"
#include <stdio.h>

/**
 * _puts - prints out a string
 * @str: parameter for a string
 * Return: a string
 */

void _puts(char *str)
{
	printf("%p", *str);
	_putchar('\n');
}
