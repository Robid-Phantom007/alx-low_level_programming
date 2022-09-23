/**
 * File: 2-key_index.c
 * Author: Dibor_Solomon
 */

#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key
 * according to a given hash
 *
 * @key: key passed
 * @size: size of the array of the hash table
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
