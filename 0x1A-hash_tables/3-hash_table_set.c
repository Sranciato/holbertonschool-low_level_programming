#include "hash_tables.h"
#include <string.h>
void handle_node(hash_table_t *ht, hash_node_t *new_node);
/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on Success 0 on Failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;

	if (!ht || strcmp(key, "") == 0)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	handle_node(ht, new_node);

	return (1);
}
/**
 * handle_node - adds node to hash table
 * @ht: hash table
 * @new_node: newly allocated node
 */
void handle_node(hash_table_t *ht, hash_node_t *new_node)
{
	hash_node_t *tmp;
	unsigned long int i;

	i = key_index((const unsigned char *)new_node->key, ht->size);
	if (ht->array[i])
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (strcmp(tmp->key, new_node->key) == 0)
				break;
			tmp = tmp->next;
		}
		if (!tmp)
		{
			new_node->next = ht->array[i];
			ht->array[i] = new_node;
		}
		else
		{
			free(tmp->value);
			tmp->value = strdup(new_node->value);
			free(new_node->value);
			free(new_node->key);
			free(new_node);
		}
	}
	else
	{
		new_node->next = NULL;
		ht->array[i] = new_node;
	}
}
