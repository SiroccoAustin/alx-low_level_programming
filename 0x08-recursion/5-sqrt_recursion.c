#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - output a square root
 * @n: interger
 * Return: a square root of the number
 */

int _sqrt_recursion(int n)
{
	if (sqrt(n) == floor(n))
	{
	return (-1);
	}
	else
	{
	return (sqrt(n));
	}
}
