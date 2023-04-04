#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - print all linked list elements
 * @h: pointer to the structure
 * Return: elements
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	
	if (h == NULL)
	{
	return (NULL);
	}

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}
	return (count);
}
