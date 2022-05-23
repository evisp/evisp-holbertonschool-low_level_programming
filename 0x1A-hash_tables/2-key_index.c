#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
  if (key == NULL || size == 0)
    return 0;
  else
    return (hash_djb2(key) % size);
}
