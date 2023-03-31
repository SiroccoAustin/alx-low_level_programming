#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - add node at the beginning of the linked list
 * @head: pointer to the head pointer
 * @str: string
 * Return: string and length
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = strlen(str);

	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
	return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
