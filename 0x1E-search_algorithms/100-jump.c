#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a
 * value in a sorted array of integers using the
 * Jump search algorithm
 * @array: the array to be searched
 * @size: length of the array
 * @value: the value to be searched for in rhe array
 * Return: index of the value of found or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jumps = (size_t) sqrt(size);
	size_t jump = jumps;
	size_t start = 0;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	while (size > jump && array[jump] < value)
	{
		printf("Value checked array[%li] = [%i]\n", start, array[start]);
		start = jump;
		jump += jumps;
	}
	printf("Value checked array[%li] = [%i]\n", start, array[start]);
	printf("Value found between indexes [%li] and [%li]\n", start, jump);
	for (i = start; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
