#include "lists.h"

/**
* insert_dnodeint_at_index - add node at index
* @h: pointer to linked list
* @idx: index
* @n: value
* Return: new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;

	dlistint_t *current = *h;

	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	if (idx == 0)
	{
		ptr->prev = NULL;
		ptr->next = *h;
		if (*h != NULL)
			(*h)->prev = ptr;
		*h = ptr;
		return (ptr);
	}
	while (current != NULL && count != idx - 1)
	{
		count++;
		current = current->next;
	}
	ptr->prev = current;
	ptr->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = ptr;
	}
	current->next = ptr;
	return (ptr);
}
