#include "main.h"
#include <stdio.h>

/**
 * factorial - outputs factorials of a number
 * @n: number
 * Return: factorials of a number
 */

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 1 || n == 0)
	{
	return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
