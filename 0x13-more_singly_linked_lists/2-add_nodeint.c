#include "lists.h"

/**
 * add_nodeint - add new elements to the node
 * @head: pointer to the node
 * @n: element
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;

	ptr->next = *head;

	*head = ptr;

	return (*head);
}
