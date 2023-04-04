#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node
 * @head: pointer to struct
 * @n: integer
 * Return: add node at the beginning of the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
	return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
