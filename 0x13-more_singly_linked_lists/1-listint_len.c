#include "lists.h"

/**
 * listint_len - print length of elements
 * @h: pointer to struct
 * Return: length of elements
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
