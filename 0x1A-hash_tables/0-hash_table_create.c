#include "hash_tables.h"
/**
 * hash_table_create - create an empty hash table
 * @size: size of hash table
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->size = size;
	new->array = malloc(size * sizeof(hash_node_t *));
	if (!new->array)
	{
		free(new);
		return (NULL);
	}

	for (; size; size--)
		new->array[size - 1] = NULL;

	return (new);
}
