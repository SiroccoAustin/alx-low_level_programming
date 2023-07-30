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
	unsigned int i = 0, len1 = 0, len2 = 0, w = 0, j = 0;
	char *ptr, *arr[2];

	arr[0] = (s1 != NULL) ? s1 : "";
	arr[1] = (s2 != NULL) ? s2 : "";

	while (arr[0][len1])
		len1++;
	while (arr[1][len2])
		len2++;
	if (n >= len2 && len2 != 0)
	{
		ptr = malloc(sizeof(char) * (len2 + 1));
		if (ptr == NULL)
			return (NULL);
		while (arr[1][w])
		{
			ptr[w] = arr[1][w];
			w++;
		}
		ptr[w] = '\0';
		return (ptr);
	}
	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	while (arr[0][i])
	{
		ptr[i] = arr[0][i];
		i++;
	}

	while (j < n && arr[1][j] != '\0')
	{
		ptr[len1 + j] = arr[1][j];
		j++;
	}
	ptr[len1 + j] = '\0';
	return (ptr);
}
