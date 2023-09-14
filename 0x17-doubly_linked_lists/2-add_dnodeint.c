#include "lists.h"

/**
* add_dnodeint - add a new node at the beginning of the linked list
* @head: pointer to linked list
* @n: value of new node
* Return: new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = (*head);
	while (*head != NULL)
	{
		(*head)->prev = ptr;
	}
	*head = ptr;
	return (ptr);
}
