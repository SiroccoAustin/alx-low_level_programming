#include "main.h"

/**
 * print_binary - print decimal in its binary form
 * @n: number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp;

	int k = 0;

	temp = n;

	while ((temp >>= 1) > 0)
		k++;

	while (k >= 0)
	{
		if ((n >> k) & 1)
		{
			printf("1");
		}
		else
			printf("0");
		k--;
	}
}
