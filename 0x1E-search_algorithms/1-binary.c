#include "search_algos.h"
/**
 * binary_rec - recursion function to solve the task
 * @array: array to be searched
 * @start: begining of the array
 * @end: end of the array
 * @mid: mid value
 * @value: value to be sarched for
 * Return: index if found or -1 if not
 */
int binary_rec(int *array, size_t start, size_t end, int mid, int value)
{
	size_t i, new_mid;

	printf("Searching in array: ");
	for (i = start; i < (end - 1); i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[end - 1]);
	if (array[mid] == value)
	{
		return ((int) mid);
	}

	if ((end - start) == 1)
	{
		return (-1);
	}

	if (value > array[mid])
	{
		new_mid = mid + ((end - mid) / 2);
		return (binary_rec(array, (mid + 1), end, new_mid, value));
	}
	else
	{
		if ((mid - start) % 2)
		{
			new_mid = ((mid - start) / 2);
		}
		else
		{
			new_mid = ((mid - start) / 2) - 1;
		}
		return (binary_rec(array, start, mid, new_mid, value));
	}
}

/**
 * binary_search - function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: the array tk be searched
 * @size: size of the array
 * @value: value to search for
 * Return: index of the found value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid;

	if (size % 2 == 0)
	{
		mid = (size / 2) - 1;
	}
	else
	{
		mid = size / 2;
	}
	return (binary_rec(array, 0, size, mid,  value));

}
