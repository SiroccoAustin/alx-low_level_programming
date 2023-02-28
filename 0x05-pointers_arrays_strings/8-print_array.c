#include "main.h"
#include <stdio.h>

/**
 * print_array - prints element of the array
 * @a: pointer to the array
 * @n: number of arrats to be printed
 * Return: elements of a array
 */


void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
	printf("%d\n", a[i]);
	i++;
	}
}
