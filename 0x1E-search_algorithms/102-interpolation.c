#include "search_algos.h"

/**
 * inter_rec - recursion function to carry out the search
 * @array: the array to be searched
 * @low: lower bound of the array
 * @high: upper bound of the array
 * @size: size of the array
 * @value: the value to be searched for in the array
 * Return: index of the array
 */
size_t inter_rec(int *array, size_t low, size_t high, size_t size, int value)
{
	size_t pos = ((double)(high - low) / (array[high] - array[low]));

	pos = pos * (value - array[low]);
	pos = low + pos;


	if (pos > size)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);
	if (array[pos] == value)
	{
		return (pos);
	}
	if (value > array[pos])
	{
		return (inter_rec(array, pos, high, size, value));
	}
	else
	{
		return (inter_rec(array, low, pos, size, value));
	}

}


/**
 * interpolation_search - function that searches for a value in a
 * sorted array of integers using the
 * Interpolation search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to search for in the array
 * Return: the index if found or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	int pos;

	if (array == NULL)
	{
		return (-1);
	}
	pos = (int) inter_rec(array, 0, (size - 1), size, value);
	return (pos);
}

