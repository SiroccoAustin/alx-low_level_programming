#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: string
 * @f: pointer to a function
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
