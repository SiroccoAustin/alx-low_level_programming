#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;

	unsigned int length, len1 = 0;

	char *arr[2], *ptr;

	ptr = malloc(sizeof(char *) + n);

	arr[0] = s1;
	arr[1] = s2;

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i < 2)
	{
		if (arr[i] == NULL)
		{
			arr[i] = "";
		}
		i++;
	}
	length = strlen(arr[1]);
	if (n >= length && length != 0)
	{
		strcpy(ptr, arr[1]);
		ptr[length] = '\0';
		return (ptr);
	}
	strcpy(ptr, arr[0]);
	strncat(ptr, arr[1], n);
	len1 = strlen(ptr);
	ptr[len1] = '\0';
	return (ptr);
}
