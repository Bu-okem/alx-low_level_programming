#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash_n;
	int nodes_counter = 0;
	unsigned long int x;
	if (!ht)

		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		hash_n = ht->array[x];
		while (hash_n)
		{
			if (nodes_counter)
				printf(", ");
			printf("'%s': '%s'", hash_n->key, hash_n->value);
			hash_n = hash_n->next;
			nodes_counter++;
		}
	}
	printf("}\n");
}
