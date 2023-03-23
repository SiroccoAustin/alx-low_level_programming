#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @separator: separator character
 * @n: size of array
 * Return: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	if (separator != NULL)
	{
	for (i = 0; i < n; i++)
	{
	printf("%d%s", va_arg(ap, int), separator);
	}
	}
	printf("\n");
	va_end(ap);
}
