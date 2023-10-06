#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *next;
	unsigned long int index = 0;

	if (ht == NULL)
		return;
	while (index < ht->size)
	{
		for (ptr = ht->array[index]; ptr != NULL; ptr = next)
		{
			next = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
