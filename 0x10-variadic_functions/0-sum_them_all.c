#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - add all arguments
 * @n: size of array
 * Return: sum of all integers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list list;

	if (n == 0)
	{
	return (0);
	}
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
	sum += va_arg(list, int);
	}

	va_end(list);
	return (sum);
}
