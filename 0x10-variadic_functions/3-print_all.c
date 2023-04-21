#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_char - print characters
 * @list: variadic list
 * Return: character
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_string - print string
 * @list: variadic list
 * Return: string
 */

void print_string(va_list list)
{
	char *s = va_arg(list, char *);

	if (!s)
	{
	printf("nil");
	}
	printf("%s", s);
}

/**
 * print_int - print int
 * @list: variadic list
 * Return: int
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - print float
 * @list: variadic list
 * Return: float
 */

void print_float(va_list list)
{
	double f = va_arg(list, double);

	printf("%f", f);
}

/**
 * print_all - print elements
 * @format: string
 * Return: elements
 */

void print_all(const char * const format, ...)
{
	func_t array[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list list;

	int i = 0, j;

	char *separate = "";

	va_start(list, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (array[j].s)
		{
			if (format[i] == *array[j].s)
			{
			printf("%s", separate);
			array[j].f(list);
			separate = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
