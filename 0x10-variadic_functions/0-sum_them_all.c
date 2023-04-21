#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - outputs sum of elements
 * @n:number of arguments
 * Return: sum of elements
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	int sum = 0;

	if (!n)
	{
	return (0);
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
	sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
