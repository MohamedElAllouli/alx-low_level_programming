#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h = ht;
	hash_node_t *nde, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			nde = ht->array[i];
			while (nde != NULL)
			{
				tmp = nde->next;
				free(nde->key);
				free(nde->value);
				free(nde);
				nde = tmp;
			}
		}
	}
	free(h->array);
	free(h);
}
