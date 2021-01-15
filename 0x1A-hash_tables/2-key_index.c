#include "hash_tables.h"

/**
 * key_index - gives the index
 * @key: key get index for
 * @size: size the table hash
 * Return: index the hash
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
