#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered
 *               from min to max, inclusive.
 * @min: The first value of the array
 * @max: The last value of the array
 *
 * Return: If min > max or the functionfails - NULL.
 *         Otherwise - a pointer to thenewly created array.
 */

int *array_range(int min, int max)
{
	int *array, size, index;

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
