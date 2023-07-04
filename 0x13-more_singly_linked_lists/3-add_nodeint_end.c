#include "lists.h"

/**
 * add_nodeint_end - add node at the end of the linked list
 * @head: pointerto the first node
 * @n: new element
 * Return: new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
		*head = ptr;
	else
	{
		listint_t *inter = *head;

		while (inter->next != NULL)
		{
			inter = inter->next;
		}
		inter->next = ptr;
	}
	return (*head);
}
