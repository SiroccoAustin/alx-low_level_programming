#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: character
 * @n: number of args
 * Return: print numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	while (i < n)
	{
		printf("%d", va_arg(ap, int));

		if (separator == NULL)
			return;

		if (i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
