#include "hash_tables.h"
/**
 * hash_table_get - return vale of node
 * @ht: hashtable
 * @key: key
 * Return: value of the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *key_copy;
	unsigned int index;
	hash_node_t *node;

	if (!ht)
		return (NULL);

	key_copy = strdup(key);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key_copy) == 0)
			break;
		node = node->next;
	}
	free(key_copy);

	if (!node)
		return (NULL);
	return (node->value);
}
