#include "variadic_functions.h"

/**
 * print_all - print all
 * @format: string
 * Return: print all
 */

void print_all(const char * const format, ...)
{
	int i = 0;

	char *space = "", *s;

	va_list ap;

	va_start(ap, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", space, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", space, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", space, va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);

				if (s == NULL)
					s = "(nil)";
				printf("%s%s", space, s);
				break;
			default:
				i++;
				continue;
		}
		space = ", ";
		i++;
	}
	printf("\n");
}
