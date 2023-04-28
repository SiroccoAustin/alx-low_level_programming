#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add node at the beginning of the linked list
 * @head: pointer to the list
 * @str: string
 * Return: add node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
