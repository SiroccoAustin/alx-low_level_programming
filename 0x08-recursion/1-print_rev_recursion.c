#include "main.h"

/**
 * _print_rev_recursion - print rev string
 * @s: string
 * Return: reverse string
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_print_rev_recursion(s + 1);
		_putchar(s[i]);
	}
}
