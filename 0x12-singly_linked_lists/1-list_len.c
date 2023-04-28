#include "lists.h"

/**
 * list_len - count all the nodes
 * @h: pointer to the node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
