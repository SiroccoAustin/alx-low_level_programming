#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: represents how many times a diagonal lines can be drawn
 * Return: a diagonal line
 */

void print_diagonal(int n)

{

	int i = 0, j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
		if (j == i)
			{
			_putchar(92);
			_putchar('\n');
			}
		else
			{
			_putchar(32);
			}
		++j;
		}
		++i;
	}
	}
}
