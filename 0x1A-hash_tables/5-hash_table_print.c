#include "hash_tables.h"

/**
 * hash_table_print - prints values of the hash table
 *@ht: pointer to the hash table
 *Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int one = 1;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	printf("{");
	while (i < ht->size)
	{
		hash_node_t *ptr = ht->array[i];
		while (ptr != NULL)
		{
			if (!one)
			{
				printf(", ");
			}
			printf("'%s': '%s'", ptr->key, ptr->value);
			one = 0;
			ptr = ptr->next;
		}
		i++;
	}
	printf("}\n");
}
