#include "lists.h"

/**
 * insert_nodeint_at_index - add new node at index
 * @head: pointer to the linked list
 * @idx: index
 * @n: data of the new node
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;

	listint_t *tmp;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}

	else
	{
		tmp = *head;

		while (--idx)
		{
			tmp = tmp->next;
		}
		ptr->next = tmp->next;
		tmp->next = ptr;
	}
	return (ptr);
}
