#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free memory
 * @head: pointer to the node
 * Return: free memory
 */

void free_list(list_t *head)
{
	free(head->str);
	free(head);
}
