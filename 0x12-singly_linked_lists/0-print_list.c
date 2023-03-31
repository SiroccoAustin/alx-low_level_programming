#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all elements in alist
 * @h: pointer to a struct
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (!h->str)
	{
	printf("[0] (nil)\n");
	}
	while (h != NULL)
	{
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	count++;
	}
	return (count);
}
