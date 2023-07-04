#include "lists.h"

/**
 * print_listint - print elements
 * @h: pointer to node
 * Return: number of elements in the node
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
