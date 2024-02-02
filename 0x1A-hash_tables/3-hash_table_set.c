#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - set a value  at hash table
 * @ht: hash table adress
 * @key: key of value
 * @value: the value associated with the key
 * Return: 1 onsuccsess or 0 in faild
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp = NULL;
	hash_node_t *h_n = NULL;
	char *v_cp;
	unsigned int i, ind;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	v_cp = strdup(value);
	if (v_cp == NULL)
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[ind];
	for (i = ind; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = v_cp;
			return (1);
		}
	}
	h_n = malloc(sizeof(hash_node_t));
	if (h_n == NULL)
	{
		free(v_cp);
		return (0);
	}
	h_n->key = strdup(key);
	if (h_n->key == NULL)
	{
		free(h_n);
		return (0);
	}
	h_n->value = v_cp;
	h_n->next = temp;
	temp = h_n;
	return (1);
}

