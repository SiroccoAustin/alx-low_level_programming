#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: represents how many times a diagonal lines can be drawn
 * Return: a diagonal line
 */

void print_diagonal(int n)

{

	int i = 0, j;

	for(int i = 0; i < size; i++)
    	{
        for(int j = 0; j < size; j++)
        {
        _putchar(32);
        }
	_putchar(92);
        _putchar('\n');
    	}
}
