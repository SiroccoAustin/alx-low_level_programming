#include "lists.h"

/**
 * add_nodeint - add new node
 * @head: pointer to linked list
 * @n: element to add in the linked list
 * Return: new linekd list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;

	*head = ptr;
	return (ptr);
}
