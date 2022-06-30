#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -To allocates memory using malloc.
 * @b: The number of memory in bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
