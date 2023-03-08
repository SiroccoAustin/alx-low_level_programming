#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - output power on the number
 * @x: first argument
 * @y: second argument
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
	return (-1);
	}
	else
	{
	x = x * y;
	return (x);
	}
}
