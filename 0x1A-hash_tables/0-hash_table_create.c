#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;
	unsigned long int index = 0;
	if (size = 0)
		return (NULL);

	ptr = malloc(sizeof(hash_table_t));
	if (ptr == NULL)
		return (NULL);
	ptr->array = malloc(sizeof(hash_node_t) * size);
	if (ptr->array == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->size = size;

	while (index < size)
	{
		ptr[index] = NULL;
		index++;
	}
	return (ptr);
}
