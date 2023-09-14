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
	dlistint_t *current = *head;

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
		while (current->next != NULL)
		{
			current = current->next;
		}
		ptr->prev = current;
		current->next = ptr;
	}
	return (ptr);
}
