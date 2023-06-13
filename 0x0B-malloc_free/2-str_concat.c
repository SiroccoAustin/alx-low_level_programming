#include "main.h"

/**
 * str_concat - concatenate w strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a new string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, len1 = 0, len2 = 0, m, j, z = 0;

	char *ptr;

	for (m = 0; s1[m]; m++)
		len1++;

	for (j = 0; s2[j]; j++)
		len2++;

	ptr = malloc(sizeof(char *) * (len1 + len2));

	if (ptr == NULL)
		return (NULL);

	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (z < len2)
	{
		ptr[i] = s2[z];
		z++;
		i++;
	}

	return (ptr);
}
