#include "lists.h"

/**
 * listint_len - counts number of elements the node
 * @h: pointer to the node
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
