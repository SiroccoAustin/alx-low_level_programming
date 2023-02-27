#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: first parameter
 * @b: second parameter
 * Return: swapped values of two parameters
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
