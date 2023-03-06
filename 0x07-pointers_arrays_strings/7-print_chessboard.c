#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_chessboard - prints out a chessboard
 * @a: pointer to a multidimensional array
 * Return: a chessboard
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
	for (j = 0; j < 8; j++)
	{
	printf("%c", a[i][j]);
	if (j == 7)
	{
	printf("\n");
	}
	}
	i++;
	}
}
