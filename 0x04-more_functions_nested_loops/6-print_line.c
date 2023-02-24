#include "main.h"

/**
 * print_line - prints a straight line n times
 * @n: represent a digit of how many times a line must be drawn
 * Return: a straight line
 */

void print_line(int n)

{

	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	for (i = 0; i < n; ++i)
	{
	_putchar('_');
	}
}
