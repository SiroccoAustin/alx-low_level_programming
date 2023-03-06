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
	int matrix[size][size] = a;

	int i = 0, backsum = 0, sum = 0;

	while (i < size)
	{
	sum += matrix[i][i];
	backsum += matrix[i][size - i - 1];
	i++;
	}
	printf("%d, %d", sum, backsum);
}
