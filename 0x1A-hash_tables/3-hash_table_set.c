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
	hash_node_t *temp;
	char *v_cp;
	unsigned long int ind, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	v_cp = strdup(value);
	if (v_cp == NULL)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	for (i = ind; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = v_cp;
			return (1);
		}
	}
	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
	{
		free(v_cp);
		return (0);
	}
	temp->key = strdup(key);
	if (temp->key == NULL)
	{
		free(temp);
		return (0);
	}
	temp->value = v_cp;
	temp->next = ht->array[ind];
	ht->array[ind] = temp;
	return (1);
}

