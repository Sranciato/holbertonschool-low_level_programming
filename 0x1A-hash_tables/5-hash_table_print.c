#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int count = 0;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node)
			{
				if (count > 0)
					printf(", ");
				printf("\'%s\': \'%s\'", node->key, node->value);
				node = node->next;
				count++;
			}
		}
		printf("}\n");
	}
}
