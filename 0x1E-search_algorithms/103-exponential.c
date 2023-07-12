#include "search_algos.h"



/**                                                                                                                    *
 *
 */                                                                                                                   size_t binary_rec(int *array,size_t start, size_t end, size_t mid,  int value)
{                                                                                                                             size_t i, new_mid;

        printf("Searching in array: ");
        for (i = start; i < (end - 1); i++)                                                                                   {
                printf("%d, ", array[i]);
        }
        printf("%d\n", array[end - 1]);
        if (array[mid] == value)                                   {                                                                  return (mid);                                }

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


size_t rec_expo(int *array,size_t low, size_t high, size_t size, int value)
{
	if (low > size)
	{
		return (-1);
	}
	
	if (array[high] == value)
	{
		return (high);
	}
	if (value > array[high])
	{
		return (rec_expo(array, high, (high * 2), size, value));
	}
	else
	{
		return ((binary_rec(array, low, high, (high - low) / 2, value)) + low);
	}
}

int exponential_search(int *array, size_t size, int value)
{

	if (array == NULL)
	{
		return (-1);
	}
	return ((int) rec_expo(array, 0, 1, size, value));
	
}
