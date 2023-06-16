#include "main.h"

/**
 * string_nconcat - concatenate strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len1 = 0, len2 = 0, w = 0, z = 0, j = 0;
	char *ptr, *arr[2];

	ptr = malloc(sizeof(char *) * (n + 1));
	if (ptr == NULL)
		return (NULL);
	arr[0] = s1;
	arr[1] = s2;
	while (arr[i])
	{
		if (arr[i] == NULL)
			arr[i] = "";
		i++;
	}
	while (arr[0][len1])
		len1++;
	while (arr[1][len2])
		len2++;
	if (n >= len2 && len2 != 0)
	{
		while (arr[1][w])
		{
			ptr[w] = arr[1][w];
			w++;
		}
		return (ptr);
	}
	while (arr[0][z])
	{
		ptr[z] = arr[0][z];
		z++;
	}
	while (j < n)
	{
		ptr[len1] = arr[1][j];
		len1++;
		j++;
	}
	return (ptr);
}
