
#include "search_algos.h"

/**
 * linear_search - function that searches for
 * a value in an array of integers using the Linear search algorithm
 * @array: the array of integers ti search
 * @size: the size of the array
 * @value: thw value to search for
 * Return: the index if found or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
