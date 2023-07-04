#include "lists.h"

/**
 * pop_listint - delete head
 * @head: pointer to head
 * Return: deleted number
 */

int pop_listint(listint_t **head)
{
	int num;

	listint_t *ptr;

	if (*head == NULL)
		return (0);

	ptr = *head;

	num = ptr->n;

	*head = (*head)->next;
	free(ptr);
	return (num);
}

