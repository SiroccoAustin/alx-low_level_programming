#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonal integers
 * @a: pointer to an array
 * @size: size of array
 * Return: sum of diagonal intergers
 */

void print_diagsums(int *a, int size)
{

	int i = 0, j, backsum = 0, sum = 0;

	while (i < size)
	{
	for (j = 0; j < size; j++)
	{
	(i == j)? sum += a[j] : 0;
	(i + j == size - 1)? backsum += a[j] : 0;
	}
	i++;
	}
	printf("%d, %d\n", sum, backsum);
}
