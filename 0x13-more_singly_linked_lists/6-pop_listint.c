#include "lists.h"

/**
 * pop_listint - delete node
 * @head: pointer to the linked list
 * Return: deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;

	if (*head == NULL)
	{
		return (0);
	}
	*head = (*head)->next;
	free(ptr);
	return (ptr->n);
}
