#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: word separator
 * @n: number of args
 * Return: print strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	char *s;

	va_list ap;

	va_start(ap, n);

	while (i < n)
	{
		s = va_arg(ap, char *);
		if (!s)
			s = "(nil)";
		printf("%s", s);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
