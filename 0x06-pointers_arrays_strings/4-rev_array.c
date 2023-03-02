#include "main.h"
#include <stdio.h>

/**
 * reverse_array - output a reversed array
 * @a: parameter for array
 * @n: number of elements
 * Return: a reversed array
 */

void reverse_array(int *a, int n)
{
	int midpoint = n / 2;

	int i = 0;

	int temp[];

	while (i < midpoint)
	{
	temp = a[n - i - 1];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
	i++;
	}
}
