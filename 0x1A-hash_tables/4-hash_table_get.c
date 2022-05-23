#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
  unsigned long int idx;
  hash_node_t *nodes = NULL;

  if (ht == NULL || key == NULL)
    return NULL;

  idx = key_index((const unsigned char *)key, ht->size);
  nodes = ht->array[idx];

  while (nodes)
    {
      if (strcmp(nodes->key, key) == 0)
	return nodes->value;

      nodes = nodes->next;
    }

  return NULL;
}
