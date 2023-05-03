#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: pointer to linked list
 * @index: index
 * Return: delete node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *tmp2 = *head;

	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (--index)
	{
		tmp = tmp->next;
		i++;
	}
	if (i != index - 1)
	{
		tmp2 = tmp->next;
		tmp->next = tmp2->next;
		free(tmp2);
		return (1);
	}
	return (-1);
}
