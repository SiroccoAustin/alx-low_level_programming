#include "main.h"

/**
 * str_concat - concatenate w strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a new string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, len1 = 0, len2 = 0, m, j, z = 0, w;

	char *ptr, *arr[2];

	arr[0] = s1;
	arr[1] = s2;

	for (w = 0; arr[w]; w++)
	{
		if (arr[w] == NULL)
			arr[w] = "";
	}

	for (m = 0; arr[0][m]; m++)
		len1++;

	for (j = 0; arr[1][j]; j++)
		len2++;

	ptr = malloc(sizeof(char *) * (len1 + len2));

	if (ptr == NULL)
		return (NULL);

	while (i < len1)
	{
		ptr[i] = arr[0][i];
		i++;
	}

	while (z < len2)
	{
		ptr[i] = arr[1][z];
		z++;
		i++;
	}

	return (ptr);
}
