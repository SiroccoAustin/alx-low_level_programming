#include "main.h"

/**
 * checker - copy string one
 * @arr: string to copy
 * @len: number of elements
 * Return: a copy of a string
 */

char *checker(char *arr, unsigned int len)
{
	unsigned int i = 0;
	char *ptr;

	ptr = malloc(sizeof(char *) * len);
	if (ptr == NULL)
		return (NULL);
	while (arr[i])
	{
		ptr[i] = arr[i];
		i++;
	}
	return (ptr);
}

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

	arr[0] = s1;
	arr[1] = s2;

	while (i < 2)
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
		ptr = malloc(sizeof(char *) * n);
		if (ptr == NULL)
			return (NULL);
		while (arr[1][w])
		{
			ptr[w] = arr[1][w];
			w++;
		}
		return (ptr);
	}
	ptr = malloc(sizeof(char *) * (len1 + n));
	if (ptr == NULL)
		return (NULL);
	ptr = checker(arr[0], len1);
	while (j < n)
	{
		ptr[len1] = arr[1][j];
		len1++;
		j++;
	}
	return (ptr);
}
