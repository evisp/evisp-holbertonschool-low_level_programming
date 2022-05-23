#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
  hash_node_t *nodes;
  hash_node_t *new;
  unsigned long int idx;

  if (ht == NULL || key == NULL)
    return 0;

  idx = key_index((const unsigned char *)key, ht->size);
  nodes = ht->array[idx];

  while (nodes != NULL)
    {
      if (strcmp(nodes->key, key) == 0)
	{
	  free(nodes->value);
	  nodes->value = strdup(value);
	  if (nodes->value == NULL)
	    return (0);
	  return (1);
	}
      nodes = nodes->next;
    }

  new = malloc(sizeof(hash_node_t));
  if (new == NULL)
    return (0);

  new->key = strdup(key);
  new->value = strdup(value);
  if (new->value == NULL)
    return (0);
  new->next = ht->array[idx];
  ht->array[idx] = new;

  return (1);
  
}
