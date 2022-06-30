#include "main.h"
#include <stdlib.h>

/**
 * array_range - To creates an array of integers ordered
 *		from min to max, to be inclusive.
 * @min: Indicate the first value of the array.
 * @max: Indicate the last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *		Otherwise - return pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
