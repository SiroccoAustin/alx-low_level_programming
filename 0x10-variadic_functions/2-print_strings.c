#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @separator: string argument
 * @n: int argument
 * Return: strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	va_start(ap, n);
	for (i = 0; i != n; i++)
	{
	char *s = va_arg(ap, char *);
	
	if (!s)
	{
	printf("nil");
	}
	else
	{
	printf("%s", s);
	}
	if (i != n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	printf("\n");
	va_end(ap);
}
