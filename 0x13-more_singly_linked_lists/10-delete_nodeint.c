#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to node
 * @index: index
 * Return: 1 if successful and -1 if not successful
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *temp = *head, *del;

	if (index == 0)
	{
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}
	else
	{
		while (count < index - 1)
		{
			if (temp->next == NULL)
				return (-1);
			count++;
			temp = temp->next;
		}
		del = temp->next;
		temp->next = temp->next->next;
		del->next = NULL;
		free(del);
	}
	return (1);
}
