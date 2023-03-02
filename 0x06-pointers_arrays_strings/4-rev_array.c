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

	int i = 0;

	int temp = 0;

	while (i < n)
	{
	temp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
	i++;
	}
}
