#include "variadic_functions.h"

/**
 * sum_them_all - add numbers
 * @n: number of args
 * Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	return (sum);
}
