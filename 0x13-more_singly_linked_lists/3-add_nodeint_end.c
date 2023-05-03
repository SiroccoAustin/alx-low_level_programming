#include "lists.h"

/**
 * add_nodeint_end - add node at the end of the linked list
 * @head: pointer to the nodes
 * @n: element to be add
 * Return: added element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;

	listint_t *last;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = ptr;
	}
	return (ptr);
}
