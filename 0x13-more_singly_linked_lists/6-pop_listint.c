#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes first node
 * @head: pointer
 * Return: element
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;

	if (*head == NULL)
	{
	return (0);
	}

	*head = (*head)->next;

	return (temp->n);

	free(temp);

	temp = NULL;
}
