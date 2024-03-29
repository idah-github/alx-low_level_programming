#include "hash_tables.h"
/**
 * key_index - function assigns index to key
 * @key: key
 * @size: size of array
 * Return: assigned key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ind;

	ind = ((hash_djb2(key) % size));
	return (ind);
}
