#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || ht->size == 0 || key == NULL || *key == 0)
		return (NULL);
	hash_node_t *ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			break;
		ptr = ptr->next;
	}
	if (ptr == NULL)
		return (NULL);

	return (strdup(ptr->value));
}
