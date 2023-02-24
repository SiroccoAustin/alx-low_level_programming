#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 * Return: numbers from 10 to 14 printed 10 times
 */

void more_numbers(void)

{

	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
		_putchar(j + '0');
		++j;
		}
		_putchar('\n');
		++i;
	
}
