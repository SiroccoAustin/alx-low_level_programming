#include "main.h"

/**
 * _strncat - appends first n characters from src to dest
 *
 * @dest: destination array
 * @src: source array
 * @n: number of characters
 *
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;
	while (n > 0 && *src != '\0')
	{
		*ptr++ = *src++;
		n--;
	}
	*ptr = '\0';

	return (dest);
}
