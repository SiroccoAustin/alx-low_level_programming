#include "lists.h"

/**
* add_dnodeint - add node at the end of linked list
* @head: pointer to linked list
* @n: new value
* Return: new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		ptr->prev = NULL;
		*head = ptr;
	}
	else
	{
		ptr->prev = *head;
		while ((*head)->next != NULL)
		{
			*head = (*head)->next;
		}
		*head->next = ptr;
	}
	return (ptr);
}
