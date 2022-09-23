/**
 * file: 1-djb2.c
 * Author: Dibor_Solomon
 */

#include "hash_tables.h"

/**
 * hash_djb2 - Function that implement the djb2 algorithm which
 * generates a random number through a string given (hash number)
 *
 * @str: string
 * Return: hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
