#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_name - call function to print name
 * @name: string argument
 * @f: pointer to a function
 * Return: print a name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
